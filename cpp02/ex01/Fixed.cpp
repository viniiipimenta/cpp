#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	this->value = 0;
}

Fixed::Fixed(int value)
{
	std::cout << "Default constructor called" << std::endl;
	this->value = value * 256;
}

Fixed::Fixed(float value)
{
	std::cout << "Default constructor called" << std::endl;
	this->value = roundf(value * 256);
}

Fixed::Fixed(const Fixed &src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}


Fixed &Fixed::operator=(Fixed const &rhs)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->value = rhs.getRawBits();
	return *this;
}

std::ostream &operator<<(std::ostream &o, Fixed const &i)
{
	o << i.toFloat();
	return o;
}

void Fixed::setRawBits(int const raw)
{
	this->value = raw;
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function Called" << std::endl;
	return this->value;
}

float	Fixed::toFloat(void) const
{
	return ((float)this->value / 256);
}

int	Fixed::toInt(void) const
{
	return (this->value / 256);
}