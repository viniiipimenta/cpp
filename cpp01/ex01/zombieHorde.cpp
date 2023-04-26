#include "Zombie.hpp"

Zombie* zombieHorde(int n, std::string name)
{
    int i = 0;
    Zombie *zombie = new Zombie[n];

    while (i <= n)
    {
        zombie[i].setName(name);
        i++;
    }
    return (zombie);
}