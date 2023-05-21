#include "WrongCat.hpp"

// Constructors and destructor

WrongCat::WrongCat()
{
    std::cout << "Default WrongCat constructor called" << std::endl;
    this->type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat &src) : WrongAnimal(src)
{
    std::cout << "WrongCat copy constructor called" << std::endl;
    *this = src;
}

WrongCat &WrongCat::operator=(const WrongCat &src)
{
    std::cout << "WrongCat assignment operator called" << std::endl;
    this->type = src.type;
    return (*this);
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat destructor called" << std::endl;
}

// Actions

void WrongCat::makeSound()const
{
    std::cout << this->getType() << ": botbotbot" << std::endl;
}