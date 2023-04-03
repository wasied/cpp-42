#ifndef BITCOIN_EXCHANGE_HPP
# define BITCOIN_EXCHANGE_HPP

# include <iostream>
# include <fstream>
# include <sstream>
# include <vector>
# include <string>
# include <limits>
# include <cstdlib>
# include <sstream>

// Needed because we must keep the order of the data
typedef std::pair<std::string, std::string> DataPair;
typedef std::vector<DataPair>               DataVector;
typedef std::vector<std::string>            ResultVector;

class BitcoinExchange
{
    public:
        BitcoinExchange(DataVector ourData, DataVector theirData);
        ~BitcoinExchange();

        ResultVector    ComputeFormattedData();

    private:
        DataPair    GetFromDate(const std::string &date);
        DataPair    GetClosestData(const std::string &date);

        int         CalculateDateDifference(const std::string &date1, const std::string &date2);
        double      GetTheirValue(const std::string &date);

    private:
        DataVector _ourData;
        DataVector _theirData;
};


#endif