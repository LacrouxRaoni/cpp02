#include "Fixed.hpp"

int const Fixed::fractBits = 8;

Fixed::Fixed()
{
	fixedPoint = 0;
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

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits( void ) const 
{
	std::cout << "getRawBits member function called" << std::endl;
	return fixedPoint;
}

void Fixed::setRawBits( int const raw )
{
	fixedPoint = raw;
}

