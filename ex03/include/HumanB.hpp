#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanB {
public:
    HumanB();
    HumanB(const std::string& name);
    ~HumanB();
    HumanB& operator=(const HumanB& other);
    void attack() const;
    void setWeapon(Weapon& weapon);
private:
    std::string name;
    Weapon* weapon;
};

#endif // HUMANB_HPP
