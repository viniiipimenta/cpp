#include "Cat.hpp"

// Constructors and destructor

Cat::Cat()
{
    std::cout << "Cat constructor called" << std::endl;
    this->type = "Cat";
}

Cat::Cat(const Cat &src) : Animal(src)
{
    std::cout << "Cat copy constructor called" << std::endl;
    *this = src;
}

Cat &Cat::operator=(const Cat &src)
{
    std::cout << "Cat assignment operator called" << std::endl;
    this->type = src.type;
    return (*this);
}

Cat::~Cat()
{
    std::cout << "Cat destructor called" << std::endl;
}

// Actions

void Cat::makeSound()const
{
    std::cout << this->getType() << ": Meeeoowwww" << std::endl;
}