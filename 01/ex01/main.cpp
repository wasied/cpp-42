#include "Zombie.hpp"

int main(int argc, char *argv[]) {

    std::cout << std::endl << "Creating a new horde of " << std::to_string(ZOMBIE_AMOUNTS) << " zombies" << std::endl;

    std::cout << "========================================" << std::endl;
    Zombie *zombie = zombieHorde(ZOMBIE_AMOUNTS, "zomby");
    
    for (int i = 0; i < ZOMBIE_AMOUNTS; i++) {
        zombie[i].announce();
    }
    
    for (int i = 0; i < ZOMBIE_AMOUNTS; i++) {
        zombie[i].setName("zomby" + std::to_string(i));
    }
    
    for (int i = 0; i < ZOMBIE_AMOUNTS; i++) {
        zombie[i].announce();
    }

    delete[] zombie;
    std::cout << "========================================" << std::endl << std::endl;

    return (0);
}