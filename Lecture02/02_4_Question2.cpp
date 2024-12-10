#include <iostream>
#include <cstdlib>
#include <ctime>

int main()
{
	srand(time(NULL));
	for (int i = 0; i < 5; i++)
	{
		std::cout <<rand()%100 <<" ";
	}
	return 0; 
}