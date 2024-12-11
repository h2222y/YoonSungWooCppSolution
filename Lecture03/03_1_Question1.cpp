#include <iostream>

struct Point
{
	int xpos;
	int ypos;
	
	void movePos(int x, int y)
	{
		xpos += x;
		ypos += y;
	}

	void addPoint(const Point& pos)
	{
		xpos += pos.xpos;
		ypos += pos.ypos;
	}

	void showPosition()
	{
		std::cout << "[" << xpos << " ," << ypos << "]" << std::endl;
	}
};


int main(void)
{
	Point pos1 = { 12,4 };
	Point pos2 = { 20,30 };
	pos1.movePos(-7, 10);
	pos1.showPosition();

	pos1.addPoint(pos2);
	pos1.showPosition();
	
}