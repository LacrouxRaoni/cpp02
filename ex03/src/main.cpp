#include "Point.hpp"

bool bsp( Point const a, Point const b, Point const c, Point const point);

int main( void ) 
{
	Point a(0, 0);
	Point b(4, 0);
	Point c(4, 6);
	Point pointIn(4, 1);
	Point pointOut(4, 8);
	bool ret;

	//It is in test
	ret = bsp(a, b, c, pointIn);
	if (ret == true){
		std::cout << "It is in" << std::endl;
	} else {
		std::cout << "It is out" << std::endl;
	}
	//It is out test
	ret = bsp(a, b, c, pointOut);
	if (ret == true){
		std::cout << "It is in" << std::endl;
	} else {
		std::cout << "It is out" << std::endl;
	}
	return 0;
}