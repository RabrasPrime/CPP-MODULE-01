//
// Created by tomjo on 22/08/2025.
//

#include "Zombie.hpp"

Zombie* newZombie( std::string name )
{
    return new Zombie(name);
}