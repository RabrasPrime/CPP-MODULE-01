#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanA {
public:
    HumanA();
    HumanA(const std::string& name, Weapon& weapon);
    ~HumanA();
    HumanA& operator=(const HumanA& other);
    void attack() const;
private:
    std::string name;
    Weapon& weapon;
};

#endif // HUMANA_HPP
