#include "Zombie.hpp"

Zombie* zombieHorde(int n, std::string name);

int main()
{
    int count = 10;
    Zombie *zombie = zombieHorde(count, "mpimenta");

    for (size_t i = 0; i < count; i++)
    {
        zombie[i].announce();
    }
    delete [] zombie;
    return 0;
}