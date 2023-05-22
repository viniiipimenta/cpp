#include "Animal.hpp"

// Constructors and destructor

Animal::Animal()
{
    std::cout << "Default Animal constructor called" << std::endl;
    this->type = "Default";
}

Animal::Animal(const Animal &src)
{
    std::cout << "Animal copy constructor called" << std::endl;
    *this = src;
}

Animal &Animal::operator=(const Animal &src)
{
    std::cout << "Animal assignment operator called" << std::endl;
    this->type = src.type;
    return (*this);
}

Animal::~Animal()
{
    std::cout << "Animal destructor called" << std::endl;
}

// Actions

void Animal::makeSound()const
{
    std::cout << "This animal doesn't have a sound" << std::endl;
}

std::string Animal::getType()const
{
    return (this->type);
}