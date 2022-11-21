#include "Point.hpp"

Point::Point() : x(0), y(0){
}

Point::Point(float x, float y) : x(x), y(y){
}

Point::Point(const Point& point){
	*this = point;
}

Point& Point::operator=(const Point& point){
	 const_cast<Fixed&>(this->x) = point.x;
	 const_cast<Fixed&>(this->y) = point.y;

	return *this;
}

Point::~Point(){

}

const Fixed& Point::getX() const {
	return x;
}

const Fixed& Point::getY() const {
	return y;
}


