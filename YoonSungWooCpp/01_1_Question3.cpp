#include <iostream>

int main()
{
	int dan = 0;
	std::cout << "몇 단을 입력하시겠습니까?: ";
	std::cin >> dan;

	for (int i = 1; i <= 9; i++)
	{
		std::cout << dan << " x " << i << " = " << i * dan << std::endl;
	}
	return 0; 
}