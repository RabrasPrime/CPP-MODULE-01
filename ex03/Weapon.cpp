
#include "Weapon.hpp"

Weapon::Weapon(const std::string& type) : type(type) {}
Weapon::Weapon() : type("undefined") {}
Weapon::~Weapon() {}
Weapon& Weapon::operator=(const Weapon& other) {
    if (this != &other) {
        type = other.type;
    }
    return *this;
}

const std::string& Weapon::getType() const {
    return type;
}

void Weapon::setType(const std::string& type) {
    this->type = type;
}

