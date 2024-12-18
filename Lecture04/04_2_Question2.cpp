#include <iostream>
using namespace std;

class Point
{
public:
	void init(int x, int y)
	{
		xpos = x;
		ypos = y;
	}
	void showPointInfo() const
	{
		cout << "[" << xpos << ", " << ypos << "]" << endl;
	}
private:
	int xpos, ypos;
};

class Circle
{
public:
	void init(int x, int y, int rad)
	{
		center.init(x, y);
		radius = rad;
	}
	void showCircleInfo() const 
	{
		cout << "radius : " << radius << endl;
		center.showPointInfo();
	}
private:
	Point center;
	int radius;
};

class Ring
{
public:
	void init(int innerXpos, int innerYpos, int innerRadius, int outerXpos, int outerYpos, int outerRadius)
	{
		innerCircle.init(innerXpos, innerYpos, innerRadius);
		outerCircle.init(outerXpos, outerYpos, outerRadius);
	}
	void showRingInfo() const
	{
		cout << "Inner Circle Info..." << endl;
		innerCircle.showCircleInfo();
		cout << endl;
		cout << "Outer Circle Info..." << endl;
		outerCircle.showCircleInfo();
	}
private: 
	Circle innerCircle;
	Circle outerCircle;
};

int main()
{
	Ring ring;
	ring.init(1, 1, 4, 2, 2, 9);
	ring.showRingInfo();
	return 0; 
}