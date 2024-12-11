#include <iostream>

int main()
{
	double salesAmount = 0;
	while (true)
	{
		std::cout << "판매 금액을 만원 단위로 입력(-1 to end): ";
		std::cin >> salesAmount;
		if (salesAmount == -1)
		{
			std::cout << "프로그램을 종료합니다." << std::endl;
			return 0;
		}
		std::cout << "이번 달 급여: ";
		const int basicSalary = 50;
		const double profit = 0.12;
		double totalSalary = basicSalary + (salesAmount * profit);
		std::cout << static_cast<int>(totalSalary) << std::endl; 
	}
	return 0; 
}