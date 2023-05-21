#include "FragTrap.hpp"

// Constructors and destructors

FragTrap::FragTrap()
{
    std::cout << "FragTrap default constructor called" << std::endl;
    this->name = "Default";
    this->hitPoints = 100;
    this->energyPoints = 100;
    this->attackDamage = 30;
}

FragTrap::FragTrap(std::string name)
{
    std::cout << "FragTrap constructor for the " << name << " called" << std::endl;
    this->name = name;
    this->hitPoints = 100;
    this->energyPoints = 100;
    this->attackDamage = 30;
}

FragTrap::FragTrap(const FragTrap &src) : ClapTrap(src)
{
    std::cout << "FragTrap copy constructor called" << std::endl;
    *this = src;
}

FragTrap &FragTrap::operator=(const FragTrap &src)
{
    std::cout << "FragTrap assignation operator called" << std::endl;
    this->name = src.name;
    this->hitPoints = src.hitPoints;
    this->energyPoints = src.energyPoints;
    this->attackDamage = src.attackDamage;
    return (*this);
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap " << this->name << " destructor called" << std::endl;
}

// FragTrap actions

void FragTrap::highFivesGuys(void)
{
    if (this->hitPoints)
        std::cout << "FragTrap " << name << ": here's your high five" << std::endl;
    else
    {
        std::cout << "FragTrap " << this->name;
        std::cout << " is already dead, you can't use high five" << std::endl;
    }
}
