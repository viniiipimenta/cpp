#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &gun): gun(gun)
{
    this->name = name;
    this->gun = gun;
}

HumanA::~HumanA(){}

void HumanA::attack()
{
    std::cout << this->name << " attacks with their "<< this->gun.getType() << std::endl;
}

void HumanA::setWeapon(Weapon gun)
{
    this->gun = gun;
}