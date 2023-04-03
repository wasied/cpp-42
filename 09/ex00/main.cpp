#include "BitcoinExchange.hpp"

DataVector parseFile(const std::string &filePath, char delimiter = '|')
{
    std::ifstream file(filePath.c_str());
    std::string line;
    DataVector resultVec;
    
    if (file.is_open()) 
    {
        getline(file, line); // Ignore header line

        while (getline(file, line)) 
        {
            std::istringstream iss(line);
            std::string date, valueStr;
            double value;

            getline(iss, date, delimiter);
            getline(iss, valueStr);

            if (date.empty()) 
            {
                continue;
            }

            if (valueStr.empty()) 
            {
                resultVec.push_back(std::make_pair(date, "ERR_NO_VALUE"));
                continue;
            }

            date.erase(date.find_last_not_of(" \n\r\t") + 1);
            valueStr.erase(0, valueStr.find_first_not_of(" \n\r\t"));

            std::istringstream valueStream(valueStr);
            if (!(valueStream >> value))
            {
                resultVec.push_back(std::make_pair(date, "ERR_INVALID_NUMBER"));
                continue;
            }

            if (value < 0) 
            {
                resultVec.push_back(std::make_pair(date, "ERR_NEGATIVE_NUMBER"));
                continue;
            }

            if (value > std::numeric_limits<int>::max()) 
            {
                resultVec.push_back(std::make_pair(date, "ERR_TOO_BIG_NUMBER"));
                continue;
            }

            resultVec.push_back(std::make_pair(date, valueStr));
        }

        file.close();
    } 
    else 
    {
        std::cerr << "Unable to open file" << std::endl;
    }

    return resultVec;
}

int main(int argc, char *argv[]) 
{
    if (argc != 2)
    {
        std::cerr << "Usage: " << argv[0] << " <input_file>" << std::endl;
        return 1;
    }

    DataVector oursData = parseFile("data.csv", ',');
    DataVector theirData = parseFile(argv[1], '|');

    BitcoinExchange exchange(oursData, theirData);
    ResultVector result = exchange.computeFormattedData();

    for (size_t i = 0; i < result.size(); ++i) 
    {
        std::cout << result[i] << std::endl;
    }

    return (0);
}