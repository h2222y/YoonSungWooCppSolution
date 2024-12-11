#include <iostream>
using namespace std;

class Printer
{
	string saveStr;
public:
	void setString(string str);
	void showString();
};

void 
Printer::setString(string str)
{
	saveStr = str;
}

void 
Printer::showString()
{
	cout << saveStr << endl;
}

int main()
{
	Printer pnt;
	pnt.setString("Hello world!");
	pnt.showString();

	pnt.setString("I love C++");
	pnt.showString();
}