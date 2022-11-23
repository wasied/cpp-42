#include "Cast.hpp"

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        std::cout << "Usage: ./convert [value]" << std::endl;
        return 1;
    }

    Cast cast(argv[1]);
    std::cout << cast << std::endl;
}