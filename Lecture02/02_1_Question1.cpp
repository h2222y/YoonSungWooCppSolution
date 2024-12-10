#include <iostream>

int increaseNumber(int& num)
{
	return num++;
}

int changeSign(int& num)
{
	return num *=-1;
	
}

int main()
{
	int num = 5;
	std::cout << increaseNumber(num) << std::endl;	
	std::cout << changeSign(num) << std::endl;
	return 0; 
}