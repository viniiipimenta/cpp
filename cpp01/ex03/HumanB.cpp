#include "HumanB.hpp"

HumanB::HumanB(std::string name): gun(NULL)
{
    this->name = name;
}

HumanB::~HumanB(){}

void HumanB::attack()
{
    if (this->gun == NULL)
    {
        std::cout << "Impossible attack" << std::endl;
        return;
    }
    std::cout << this->name << " attacks with their "<< this->gun->getType() << std::endl;
}

void HumanB::setWeapon(Weapon &gun)
{
    this->gun = &gun;
}