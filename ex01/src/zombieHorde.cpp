//
// Created by tomjo on 22/08/2025.
//

#include "Zombie.hpp"
#include <string>
#include <iostream>

Zombie* zombieHorde(int N, std::string name)
{
    if (N <= 0)
        return NULL;
    Zombie* horde = new Zombie[N];
    if (!horde)
        return NULL;
    for (int i = 0; i < N; ++i) {
        horde[i] = Zombie(name);
    }
    return horde;
}
