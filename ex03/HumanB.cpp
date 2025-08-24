//
// Created by tomjo on 23/08/2025.
//

#include "HumanB.hpp"
#include <iostream>

using namespace std;

HumanB::HumanB() : name("Unnamed"), weapon(nullptr) {}
HumanB::HumanB(const std::string& name) : name(name), weapon(nullptr) {}
HumanB::~HumanB() {}
HumanB& HumanB::operator=(const HumanB& other) {
    if (this != &other) {
        name = other.name;
        weapon = other.weapon;
    }
    return *this;
}

void HumanB::attack() const {
    if (weapon) {
        std::cout << name << " attacks with their " << weapon->getType() << std::endl;
    } else {
        std::cout << name << " has no weapon to attack with!" << std::endl;
    }
}

void HumanB::setWeapon(Weapon& weapon) {
    this->weapon = &weapon;
}
