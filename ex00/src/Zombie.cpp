//
// Created by tomjo on 22/08/2025.
//

#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie() : name("Unnamed") {
    std::cout << "A zombie named " << name << " has been created!" << std::endl;
}

Zombie::Zombie(const std::string& name) : name(name) {
    std::cout << "A zombie named " << name << " has been created!" << std::endl;
}

Zombie::~Zombie() {
    std::cout << "Zombie " << name << " has been destroyed!" << std::endl;
}

Zombie& Zombie::operator=(const Zombie& other) {
    if (this != &other) {
        name = other.name;
    }
    return *this;
}

void Zombie::announce() {
    std::cout << name << ": Braiiiiiiinnnssss..." << std::endl;
}
