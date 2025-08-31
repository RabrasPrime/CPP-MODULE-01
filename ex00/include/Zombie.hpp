//
// Created by tomjo on 22/08/2025.
//

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>
#include <iostream>

class Zombie {
public:
    Zombie();
    Zombie(const std::string& name);
    ~Zombie();
    Zombie& operator=(const Zombie& other);
    void announce();
private:
    std::string name;
};

#endif // ZOMBIE_HPP
