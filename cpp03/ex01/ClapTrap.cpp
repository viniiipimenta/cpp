#include "ClapTrap.hpp"

// Constructors and destructors

ClapTrap::ClapTrap()
{
    std::cout << "ClapTrap default constructor called" << std::endl;
    this->name = "Default";
    this->hitPoints = 10;
    this->energyPoints = 10;
    this->attackDamage = 0;
}

ClapTrap::ClapTrap(std::string name)
{
    std::cout << "ClapTrap constructor for the " << name << " called" << std::endl;
    this->name = name;
    this->hitPoints = 10;
    this->energyPoints = 10;
    this->attackDamage = 0;
}

ClapTrap::ClapTrap(const ClapTrap &src)
{
    std::cout << "ClapTrap copy constructor called" << std::endl;
    *this = src;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &src)
{
    std::cout << "ClapTrap assignation operator called" << std::endl;
    this->name = src.name;
    this->hitPoints = src.hitPoints;
    this->energyPoints = src.energyPoints;
    this->attackDamage = src.attackDamage;
    return (*this);
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap " << this->name << " destructor called" << std::endl;
}

// ClapTrap actions

void ClapTrap::attack(const std::string &target)
{
    if (!this->energyPoints || !this->hitPoints)
    {
        std::cout << "ClapTrap " << this->name << " cannot attack ";
        std::cout << target << ", it does not have enough hit points or energy points" << std::endl;
    }
    else
    {
        std::cout << "ClapTrap " << this->name << " attacks " << target;
        std::cout << ", causing " << this->attackDamage << " points of damage!" << std::endl;
        this->energyPoints--;
    }
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (this->hitPoints > amount)
        this->hitPoints -= amount;
    else if (this->hitPoints > 0)
        this->hitPoints = 0;
    else
    {
        std::cout << "ClapTrap " << this->name;
        std::cout << " is already dead, you can no longer continue to attack him" << std::endl;
        return ;
    }
    std::cout << "ClapTrap " << this->name << " was attacked and lost " << amount;
    std::cout << " hit points, he now has " << this->hitPoints << " hit points" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->energyPoints > 0 && this->hitPoints > 0)
    {
        this->hitPoints += amount;
        std::cout << "ClapTrap " << this->name << " repair itself and gained ";
        std::cout << amount << " of hit points, he now has " << this->hitPoints << " hit points" << std::endl;
        this->energyPoints--;
    }
    else if (!this->energyPoints)
    {
        std::cout << "ClapTrap " << this->name << " is not able to repair itself, ";
        std::cout << "because it doesn't have enough energy points" << std::endl;
    }
    else if (!this->hitPoints)
    {
        std::cout << "ClapTrap " << this->name << " is not able to repair itself, ";
        std::cout << "because it doesn't have hit points" << std::endl;
    }
    else
    {
        std::cout << "ClapTrap " << this->name << " can't be repaired to have more than ";
        std::cout << this->hitPoints << " hit points" << std::endl;
    }
}