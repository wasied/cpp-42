#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(DataVector ourData, DataVector theirData) : _ourData(ourData), _theirData(theirData)
{
}

BitcoinExchange::~BitcoinExchange()
{
}

DataPair BitcoinExchange::GetFromDate(const std::string &date)
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

DataPair BitcoinExchange::GetClosestData(const std::string &date)
{
    DataPair fetchedDate = GetFromDate(date);
    if (!(fetchedDate.first == "ERR" && fetchedDate.second == "ERR"))
    {
        return fetchedDate;
    }

    int minDifference = std::numeric_limits<int>::max();

    for (size_t i = 0; i < _ourData.size(); ++i) 
    {
        int difference = CalculateDateDifference(date, _ourData[i].first);
        if (difference < minDifference) 
        {
            minDifference = difference;
            fetchedDate = _ourData[i];
        }
    }

    return fetchedDate;
}

int BitcoinExchange::CalculateDateDifference(const std::string &date1, const std::string &date2) 
{
    int year1, month1, day1, year2, month2, day2;

    sscanf(date1.c_str(), "%d-%d-%d", &year1, &month1, &day1);
    sscanf(date2.c_str(), "%d-%d-%d", &year2, &month2, &day2);

    int days1 = year1 * 365 + month1 * 30 + day1;
    int days2 = year2 * 365 + month2 * 30 + day2;

    return abs(days1 - days2);
}

ResultVector BitcoinExchange::ComputeFormattedData()
{
    ResultVector formattedData;

    for (size_t i = 0; i < _theirData.size(); ++i) {
        DataPair nearestData = GetClosestData(_theirData[i].first);
        std::string val = _theirData[i].second;
        std::stringstream ss;

        if (val == "ERR_NO_VALUE")
            ss << "Error: bad input => " << nearestData.first;
        else if (val == "ERR_INVALID_NUMBER")
            ss << "Error: not a valid number.";
        else if (val == "ERR_NEGATIVE_NUMBER")
            ss << "Error: not a positive number.";
        else if (val == "ERR_TOO_BIG_NUMBER")
            ss << "Error: too big number.";
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