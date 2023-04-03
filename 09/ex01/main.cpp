#include "RPN.hpp"

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        std::cout << "Usage: " << argv[0] << " \"expression\"" << std::endl;
        return 1;
    }

    std::cout << "Expression: " << argv[1] << std::endl;

    RPN rpn(argv[1]);
    std::cout << rpn << std::endl;
}