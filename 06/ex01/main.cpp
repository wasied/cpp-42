#include "serialization.hpp"

int main(void)
{
    Data*   data = new Data;

    data->s1 = "Hello";
    data->s2 = "World";
    data->n = 42;

    std::cout << std::endl << "Address of raw data: " << data << std::endl;

    uintptr_t   raw = serialize(data);
    Data*       deserialized = deserialize(raw);

    std::cout << "Address of deserialized: " << deserialized << std::endl << std::endl;

    std::cout << "--- Checking content ---" << std::endl;
    std::cout << "s1: " << deserialized->s1 << std::endl;
    std::cout << "s2: " << deserialized->s2 << std::endl;
    std::cout << "n: " << deserialized->n << std::endl;
    std::cout << "--- Checking content ---" << std::endl << std::endl;


    delete data;
    return 0;
}