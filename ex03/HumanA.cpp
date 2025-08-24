//
// Created by tomjo on 23/08/2025.
//

#include "HumanA.hpp"
#include <iostream>

using namespace std;

HumanA::HumanA() : name("Unnamed"), weapon(*(new Weapon())) {}
HumanA::HumanA(const std::string& name, Weapon& weapon) : name(name), weapon(weapon) {}
HumanA::~HumanA() {}
HumanA& HumanA::operator=(const HumanA& other) {
    if (this != &other) {
        name = other.name;
        weapon = other.weapon;
    }
    return *this;
}

void HumanA::attack() const {
    std::cout << name << " attacks with their " << weapon.getType() << std::endl;
}

