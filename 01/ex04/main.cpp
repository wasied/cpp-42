#include <iostream>
#include <fstream>
#include <string>

int main(int argc, char *argv[])
{
    if (argc != 4)
    {
        std::cout << "Wrong amount of arguments" << std::endl;
        return (1);
    }

    std::string filename = argv[1];
    std::string s1 = argv[2];
    std::string s2 = argv[3];

    std::ifstream   inputFile(filename);
    if (inputFile.is_open())
    {

        std::ofstream   outputFile(filename + ".replace");
        if (!outputFile.is_open())
        {
            std::cout << "Error opening output file" << std::endl;
            return (1);
        }

        while (inputFile.good())
        {
            std::string line;
            std::size_t found;

            std::getline(inputFile, line);
            found = line.find(s1);

            while (found != std::string::npos && found < line.length())
            {
                line.erase(found, s1.length());
                line.insert(found, s2);
                found = line.find(s1);
            }
            outputFile << line << std::endl;
        }

        outputFile.close();
        inputFile.close();
        std::cout << "Sed successfully done!" << std::endl;

    }
    else
        std::cout << "Unable to open file" << std::endl;        

    return (0);
}