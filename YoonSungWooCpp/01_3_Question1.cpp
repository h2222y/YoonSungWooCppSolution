#include <iostream>

int BoxVolume(int length)
{
	const int defaultValue = 1;
	return length * defaultValue * defaultValue;
}
int BoxVolume(int length, int width)
{
	const int defaultValue = 1;
	return length * width * defaultValue;
}
int BoxVolume(int length, int width, int height)
{
	return length * width * height;
}

int main()
{
	std::cout << "[ 3, 3, 3] : " << BoxVolume(3, 3, 3) << std::endl;
	std::cout << "[ 5, 5, D] : " << BoxVolume(5,5) << std::endl;
	std::cout << "[ 7, D, D] : " << BoxVolume(7) << std::endl;
	// std::cout << "[ D, D, D] : " << BoxVolume() << std::endl;

	return 0; 
}