
#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <iostream>
#include "Weapon.hpp"

using namespace std;

class HumanA {
    public:
        HumanA();
        HumanA(const string& name, Weapon& weapon);
        ~HumanA();
        HumanA& operator=(const HumanA& other);
        void attack() const;
    private:
        string name;
        Weapon& weapon;
};



#endif //HUMANA_HPP
