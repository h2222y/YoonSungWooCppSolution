#include <iostream>

int main()
{
	int dan = 0;
	std::cout << "�� ���� �Է��Ͻðڽ��ϱ�?: ";
	std::cin >> dan;

	for (int i = 1; i <= 9; i++)
	{
		std::cout << dan << " x " << i << " = " << i * dan << std::endl;
	}
	return 0; 
}