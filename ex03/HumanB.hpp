

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <iostream>
#include "Weapon.hpp"

using namespace std;

class HumanB {
    public:
        HumanB();
        HumanB(const string& name);
        ~HumanB();
        HumanB& operator=(const HumanB& other);
        void attack() const;
        void setWeapon(Weapon& weapon);
    private:
        string name;
        Weapon* weapon;
};

#endif //HUMANB_HPP
