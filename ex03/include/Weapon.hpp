#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>
#include <string>

class Weapon {
private:
    std::string type;
public:
    Weapon(const std::string& type);
    Weapon();
    ~Weapon();
    Weapon& operator=(const Weapon& other);
    const std::string& getType() const;
    void setType(const std::string& type);
};

#endif // WEAPON_HPP
