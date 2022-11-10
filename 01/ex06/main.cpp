#include "Harl.hpp"

int main(int argc, char *argv[])
{
    if (argc > 2)
    {
        std::cout << "Usage: ./harl [DEBUG|INFO|WARNING|ERROR]" << std::endl;
        return (1);
    }
    if (argc == 1)
    {
        std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
        return (0);
    }

    Harl        harl;
    std::size_t level;

    level = harl.getLevelFromName(argv[1]);
    switch (level)
    {

        case 0:
            std::cout << "[ DEBUG ]" << std::endl;
            harl.complain("DEBUG");
            std::cout << std::endl;

        case 1:
            std::cout << "[ INFO ]" << std::endl;
            harl.complain("INFO");
            std::cout << std::endl;

        case 2:
            std::cout << "[ WARNING ]" << std::endl;
            harl.complain("WARNING");
            std::cout << std::endl;

        case 3:
            std::cout << "[ ERROR ]" << std::endl;
            harl.complain("ERROR");
            std::cout << std::endl;
            break;

        default:
            std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
            
    }
    return (0);
}