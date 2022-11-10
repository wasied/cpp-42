#include <iostream>

int main(void) {
    std::string stringVAL = "HI THIS IS BRAIN";
    std::string *stringPTR = &stringVAL;
    std::string &stringREF = stringVAL;

    std::cout << "Memory address of stringVAL: " << &stringVAL << std::endl;
    std::cout << "Memory address held by stringPTR: " << stringPTR << std::endl;
    std::cout << "Memory address held by stringREF: " << &stringREF << std::endl;

    std::cout << "Value of stringVAL: " << stringVAL << std::endl;
    std::cout << "Value of stringPTR: " << *stringPTR << std::endl;
    std::cout << "Value of stringREF: " << stringREF << std::endl;

    return (0);
}
