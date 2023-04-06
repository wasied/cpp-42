#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(DataVector ourData, DataVector theirData) : _ourData(ourData), _theirData(theirData)
{
}

BitcoinExchange::BitcoinExchange(BitcoinExchange const &src)
{
    *this = src;
}

BitcoinExchange::~BitcoinExchange()
{
}

BitcoinExchange &BitcoinExchange::operator=(BitcoinExchange const &rhs)
{
    if (this != &rhs)
    {
        _ourData = rhs._ourData;
        _theirData = rhs._theirData;
    }
    return *this;
}

DataPair BitcoinExchange::getFromDate(const std::string &date)
{
    for (size_t i = 0; i < _ourData.size(); ++i) 
    {
        if (_ourData[i].first == date) 
        {
            return (_ourData[i]);
        }
    }

    return (DataPair("ERR", "ERR"));
}

DataPair BitcoinExchange::getClosestData(const std::string &date)
{
    DataPair fetchedDate = getFromDate(date);
    if (!(fetchedDate.first == "ERR" && fetchedDate.second == "ERR"))
    {
        return fetchedDate;
    }

    int minDifference = std::numeric_limits<int>::max();
    DataPair closestLowerDate("ERR", "ERR");

    for (size_t i = 0; i < _ourData.size(); ++i) 
    {
        int difference = calculateDateDifference(date, _ourData[i].first);
        if (difference > 0 && difference < minDifference)
        {
            minDifference = difference;
            closestLowerDate = _ourData[i];
        }
    }

    if (closestLowerDate.first == "ERR" && closestLowerDate.second == "ERR")
        return (DataPair(date, "ERR_NO_PREV_DATE"));
    return closestLowerDate;
}

int BitcoinExchange::calculateDateDifference(const std::string &date1, const std::string &date2) 
{
    int year1, month1, day1, year2, month2, day2;

    sscanf(date1.c_str(), "%d-%d-%d", &year1, &month1, &day1);
    sscanf(date2.c_str(), "%d-%d-%d", &year2, &month2, &day2);

    int days1 = year1 * 365 + month1 * 30 + day1;
    int days2 = year2 * 365 + month2 * 30 + day2;

    return (days1 - days2);
}

ResultVector BitcoinExchange::computeFormattedData()
{
    ResultVector formattedData;

    for (size_t i = 0; i < _theirData.size(); ++i) 
    {
        DataPair nearestData = getClosestData(_theirData[i].first);
        std::string val = _theirData[i].second;
        std::stringstream ss;

        if (val == "ERR_NO_VALUE")
            ss << "Error: bad input => " << nearestData.first;
        else if (val == "ERR_INVALID_NUMBER")
            ss << "Error: not a valid number.";
        else if (val == "ERR_NEGATIVE_NUMBER")
            ss << "Error: not a positive number.";
        else if (val == "ERR_TOO_BIG_NUMBER")
            ss << "Error: too large a number.";
        else if (nearestData.second == "ERR_NO_PREV_DATE")
            ss << "Error: no data was found for this date.";
        else
        {
            double bitcoinCount = atof(val.c_str());
            double bitcoinValue = atof(nearestData.second.c_str());
            double result = bitcoinCount * bitcoinValue;

            ss << nearestData.first << " => " << val << " = " << result;
        }

        formattedData.push_back(ss.str());
    }

    return formattedData;
}