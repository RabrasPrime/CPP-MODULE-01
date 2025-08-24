//
// Created by tomjo on 22/08/2025.
//

#include "Zombie.hpp"

Zombie::Zombie() : name("Unnamed") {
    cout << "A zombie named " << name << " has been created!" << endl;
}

Zombie::Zombie(const std::string& name) : name(name) {
    cout << "A zombie named " << name << " has been created!" << endl;
}

Zombie::~Zombie() {
    cout << "Zombie " << name << " has been destroyed!" << endl;
}

Zombie& Zombie::operator=(const Zombie& other) {
    if (this != &other) {
        name = other.name;
    }
    return *this;
}

void Zombie::announce() {
    cout << name << ": Braiiiiiiinnnssss..." << endl;
}
