#include <iostream>

int main()
{
	double salesAmount = 0;
	while (true)
	{
		std::cout << "�Ǹ� �ݾ��� ���� ������ �Է�(-1 to end): ";
		std::cin >> salesAmount;
		if (salesAmount == -1)
		{
			std::cout << "���α׷��� �����մϴ�." << std::endl;
			return 0;
		}
		std::cout << "�̹� �� �޿�: ";
		const int basicSalary = 50;
		const double profit = 0.12;
		double totalSalary = basicSalary + (salesAmount * profit);
		std::cout << static_cast<int>(totalSalary) << std::endl; 
	}
	return 0; 
}