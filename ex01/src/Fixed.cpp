#include "Fixed.hpp"

int const Fixed::fractBits = 8;

Fixed::Fixed() : fixedPoint(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& newFixed)
{
	std::cout << "Copy constructor called" << std::endl;
	Fixed::operator=(newFixed);
}


Fixed& Fixed::operator= (const Fixed &newFixed)
{
	std::cout << "Copy assigment operator called" << std::endl;
	this->setRawBits(newFixed.getRawBits());
	return *this;
}

Fixed::Fixed (const int i)
{
	std::cout << "Int constructor called" << std::endl;
	fixedPoint = i << fractBits;
}

Fixed::Fixed (const float f)
{
	std::cout << "Float constructor called" << std::endl;
	fixedPoint = roundf(f * (float)(1 << fractBits));
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits( void ) const 
{
	return this->fixedPoint;
}

void Fixed::setRawBits( int const raw )
{
	fixedPoint = raw;
}

float Fixed::toFloat( void ) const
{
	float f;

	f = ((float)getRawBits() / (float)(1 << fractBits));	
	return f;
}

int Fixed::toInt( void ) const
{
	float i;

	i = getRawBits() >> fractBits;
	return i;
}


std::ostream& operator<<(std::ostream& output, const Fixed& fixed)
{
	output << fixed.toFloat();
	return output;
}
