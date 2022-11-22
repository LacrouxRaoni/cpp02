#include "Point.hpp"

bool bsp( Point const a, Point const b, Point const c, Point const point);

static void isInTest(Point a, Point b, Point c)
{
	Point	point(3, 3);
	bool	ret = bsp(a, b, c, point);
	if (ret == true){
		std::cout << "point is in: " << point.getX() << ", " << point.getY() << std::endl;
		std::cout << "a pos: " << a.getX() << ", " << a.getY() << std::endl;
		std::cout << "b pos: " << b.getX() << ", " << b.getY() << std::endl;
		std::cout << "c pos: " << c.getX() << ", " << c.getY() << std::endl;
		std::cout << "It is in" << std::endl;
	} else {
		std::cout << "point is out: " << point.getX() << ", " << point.getY() << std::endl;
		std::cout << "a pos: " << a.getX() << ", " << a.getY() << std::endl;
		std::cout << "b pos: " << b.getX() << ", " << b.getY() << std::endl;
		std::cout << "c pos: " << c.getX() << ", " << c.getY() << std::endl;
		std::cout << "It is out" << std::endl;
	}
}

static void isOutTest(Point a, Point b, Point c)
{
	Point point(4, 8);
	bool ret = bsp(a, b, c, point);

	if (ret == true)
	{
		std::cout << "point is in: " << point.getX() << ", " << point.getY() << std::endl;
		std::cout << "a pos: " << a.getX() << ", " << a.getY() << std::endl;
		std::cout << "b pos: " << b.getX() << ", " << b.getY() << std::endl;
		std::cout << "c pos: " << c.getX() << ", " << c.getY() << std::endl;
	} else {
		std::cout << "point is in: " << point.getX() << ", " << point.getY() << std::endl;
		std::cout << "a pos: " << a.getX() << ", " << a.getY() << std::endl;
		std::cout << "b pos: " << b.getX() << ", " << b.getY() << std::endl;
		std::cout << "c pos: " << c.getX() << ", " << c.getY() << std::endl;
		std::cout << "It is out" << std::endl;
	}
}

int main( void ) 
{
	Point a(1, 2);
	Point b(4, 3);
	Point c(4, 6);

	isInTest(a, b, c);
	isOutTest(a, b, c);
	return 0;
}