//
// Created by tomjo on 22/08/2025.
//

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>
#include <iostream>

using namespace std;

class Zombie {
public:
    Zombie();
    Zombie(const std::string& name);
    ~Zombie();
    Zombie& operator=(const Zombie& other);
    void announce();
private:
    string name;

#endif //ZOMBIE_HPP
