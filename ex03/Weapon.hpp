
#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>

using namespace std;

class Weapon {
    private:
        string type;
    public:
        Weapon(const string& type);
        Weapon();
        ~Weapon();
        Weapon& operator=(const Weapon& other);
        const string& getType() const;
        void setType(const string& type);
};



#endif //WEAPON_HPP
