#include "WrongAnimal.hpp"

// Constructors and destructor

WrongAnimal::WrongAnimal()
{
    std::cout << "Default WrongAnimal constructor called" << std::endl;
    this->type = "WrongAnimal";
}

WrongAnimal::WrongAnimal(const WrongAnimal &src)
{
    std::cout << "WrongAnimal copy constructor called" << std::endl;
    *this = src;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &src)
{
    std::cout << "WrongAnimal assignment operator called" << std::endl;
    this->type = src.type;
    return (*this);
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal destructor called" << std::endl;
}

// Actions

void WrongAnimal::makeSound()const
{
    std::cout << this->getType() << ": wewewew" << std::endl;
}

std::string WrongAnimal::getType()const
{
    return (this->type);
}