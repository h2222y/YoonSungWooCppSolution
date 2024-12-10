#include <iostream>

// 2-dimesion Position
typedef struct __Point
{
	int xpos;
	int ypos;
}Point;

Point& PntAdder(const Point& p1, const Point& p2)
{
	Point* pptr = new Point;
	pptr->xpos = p1.xpos + p2.xpos;
	pptr->ypos = p1.ypos + p2.ypos;
	return *pptr;
}

int main()
{
	const Point* newPoint1 = new Point{ 1,2 };
	const Point* newPoint2 = new Point{ 3,4 };
	Point &addValue = PntAdder(*newPoint1, *newPoint2);
	std::cout << addValue.xpos << " " << addValue.ypos << std::endl;
	delete newPoint1;
	delete newPoint2;
	delete &addValue;
	
	return 0; 
}

