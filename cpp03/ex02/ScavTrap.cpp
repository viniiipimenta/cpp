#include "ScavTrap.hpp"

// Constructors and destructors

ScavTrap::ScavTrap()
{
    std::cout << "ScavTrap default constructor called" << std::endl;
    this->name = "Default";
    this->hitPoints = 100;
    this->energyPoints = 50;
    this->attackDamage = 20;
}

ScavTrap::ScavTrap(std::string name)
{
    std::cout << "ScavTrap constructor for the " << name << " called" << std::endl;
    this->name = name;
    this->hitPoints = 100;
    this->energyPoints = 50;
    this->attackDamage = 20;
}

ScavTrap::ScavTrap(const ScavTrap &src) : ClapTrap(src)
{
    std::cout << "ScavTrap copy constructor called" << std::endl;
    *this = src;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &src)
{
    std::cout << "ScavTrap assignation operator called" << std::endl;
    this->name = src.name;
    this->hitPoints = src.hitPoints;
    this->energyPoints = src.energyPoints;
    this->attackDamage = src.attackDamage;
    return (*this);
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap " << this->name << " destructor called" << std::endl;
}

// ScavTrap actions

void ScavTrap::attack(const std::string &target)
{
    if (!this->energyPoints || !this->hitPoints)
    {
        std::cout << "ScavTrap " << this->name << " cannot attack ";
        std::cout << target << ", it does not have enough hit points or energy points" << std::endl;
    }
    else
    {
        std::cout << "ScavTrap " << this->name << " attacks " << target;
        std::cout << ", causing " << this->attackDamage << " points of damage!" << std::endl;
        this->energyPoints--;
    }
}

void ScavTrap::guardGate(void)
{
    if (this->hitPoints)
        std::cout << "ScavTrap " << this->name << " has entered in guardGate mode" << std::endl;
    else
    {
        std::cout << "ScavTrap " << this->name;
        std::cout << " is already dead, you can't entered in guardGate mode" << std::endl;
    }
}
