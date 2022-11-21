#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"

class Point
{
	private:
		const Fixed x;
		const Fixed y;
	public:
		Point();
		Point(float x, float y);
		Point(const Point& point);
		Point& operator=(const Point& point);
		~Point();
		const Fixed& getX() const;
		const Fixed& getY() const;
};

#endif
