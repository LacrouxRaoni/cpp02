#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>
#include <string.h>

class Fixed
{
	private:
		int fixedPoint;
		static const int fractBits;
	public:
		Fixed();
		Fixed(const Fixed &a );

		Fixed (const int i);
		Fixed (const float f);
		Fixed& operator = (const Fixed &fixed);
		~Fixed();
		int getRawBits( void ) const;
		void setRawBits( int const raw );

		float toFloat( void ) const;
		int toInt( void ) const;
};

std::ostream& operator<<(std::ostream& output, const Fixed& fixed);

#endif