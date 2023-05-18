#include "Fixed.hpp"

// CONSTRUCTORS AND AXULIARS

Fixed::Fixed()
{
	this->value = 0;
}

Fixed::Fixed(int value)
{
	this->value = value * 256;
}

Fixed::Fixed(float value)
{
	this->value = roundf(value * 256);
}

Fixed::Fixed(const Fixed &src)
{
	*this = src;
}

Fixed::~Fixed(){}

Fixed &Fixed::operator=(Fixed const &rhs)
{
	this->value = rhs.getRawBits();
	return *this;
}

std::ostream &operator<<(std::ostream &o, Fixed const &i)
{
	o << i.toFloat();
	return o;
}

// GETTER AND SETTER

void Fixed::setRawBits(int const raw)
{
	this->value = raw;
}

int Fixed::getRawBits(void) const
{
	return this->value;
}

// CONVERSORS

float	Fixed::toFloat(void) const
{
	return ((float)this->value / 256);
}

int	Fixed::toInt(void) const
{
	return (this->value / 256);
}

// OPERATORS

bool Fixed::operator<(const Fixed &fixed) const
{
	if (this->toFloat() < fixed.toFloat())
		return 1;
	return 0;
}

bool Fixed::operator>(const Fixed &fixed) const
{
	if (this->toFloat() > fixed.toFloat())
		return 1;
	return 0;
}

bool Fixed::operator<=(const Fixed &fixed) const
{
	if (this->toFloat() <= fixed.toFloat())
		return 1;
	return 0;
}

bool Fixed::operator>=(const Fixed &fixed) const
{
	if (this->toFloat() >= fixed.toFloat())
		return 1;
	return 0;
}

bool Fixed::operator==(const Fixed &fixed) const
{
	if (this->toFloat() == fixed.toFloat())
		return 1;
	return 0;
}

bool Fixed::operator!=(const Fixed &fixed) const
{
	if (this->toFloat() != fixed.toFloat())
		return 1;
	return 0;
}

// Operators math

Fixed Fixed::operator+(const Fixed &fixed) const
{
	return (this->toFloat() + fixed.toFloat());
}

Fixed Fixed::operator-(const Fixed &fixed) const
{
	return (this->toFloat() / fixed.toFloat());
}

Fixed Fixed::operator*(const Fixed &fixed) const
{
	return (this->toFloat() * fixed.toFloat());
}

Fixed Fixed::operator/(const Fixed &fixed) const
{
	return (this->toFloat() / fixed.toFloat());
}

// increment

Fixed Fixed::operator++()
{
	this->value++;
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed aux = *this;
	++this->value;
	return (aux);
}

Fixed Fixed::operator--()
{
	this->value--;
	return (*this);
}

Fixed Fixed::operator--(int)
{
	Fixed aux = *this;
	--this->value;
	return (aux);
}

// max and min

Fixed &Fixed::max(Fixed &fixed, Fixed &fixed2)
{
	if (fixed.toFloat() >= fixed2.toFloat())
		return (fixed);
	return (fixed2);
}

const Fixed &Fixed::max(const Fixed &fixed, const Fixed &fixed2)
{
	if (fixed.toFloat() >= fixed2.toFloat())
		return (fixed);
	return (fixed2);
}

Fixed &Fixed::min(Fixed &fixed, Fixed &fixed2)
{
	if (fixed.toFloat() <= fixed2.toFloat())
		return (fixed);
	return (fixed2);
}

const Fixed &Fixed::min(const Fixed &fixed, const Fixed &fixed2)
{
    if (fixed.toFloat() <= fixed2.toFloat())
		return (fixed);
	return (fixed2);
}