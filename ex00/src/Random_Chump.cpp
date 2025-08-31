//
// Created by tomjo on 22/08/2025.
//

#include "Zombie.hpp"

void randomChump( std::string name )
{
    Zombie zombie(name);
    zombie.announce();
}