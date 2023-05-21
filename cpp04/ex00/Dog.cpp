#include "Dog.hpp"

// Constructors and destructor

Dog::Dog()
{
    std::cout << "Dog constructor called" << std::endl;
    this->type = "Dog";
}

Dog::Dog(const Dog &src) : Animal(src)
{
    std::cout << "Dog copy constructor called" << std::endl;
    *this = src;
}

Dog &Dog::operator=(const Dog &src)
{
    std::cout << "Dog assignment operator called" << std::endl;
    this->type = src.type;
    return (*this);
}

Dog::~Dog()
{
    std::cout << "Dog destructor called" << std::endl;
}

// Actions

void Dog::makeSound()const
{
    std::cout << this->getType() << ": RUFF RUFF" << std::endl;
}