#include "Zombie.hpp"

void randomChump(std::string name);
Zombie* newZombie(std::string name);

int main()
{
    Zombie *zombie;

    zombie = newZombie("foo");
    zombie->announce();
    randomChump("faa");
    delete zombie;
    return 0;
}