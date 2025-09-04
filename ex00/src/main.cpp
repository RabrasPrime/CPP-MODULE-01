#include "Zombie.hpp"
#include <iostream>

void randomChump( std::string name);
Zombie* newZombie( std::string name );

int main() {
    randomChump("Chump1");
    randomChump("Chump2");
    randomChump("Chump3");
    Zombie *newZombie1 = NewZombie("HeapZombie1");
    Zombie *newZombie2 = NewZombie("HeapZombie2");
    delete newZombie1;
    delete newZombie2;
    return 0;
}