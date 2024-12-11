#include <iostream>

int main()
{
	char name[100] = {};
	char phoneNumber[100] = {};
	std::cout << "이름 입력: ";
	std::cin >> name;
	std::cout << "전화번호 입력: "; 
	std::cin >> phoneNumber;
	std::cout << "이름: " << name << std::endl;
	std::cout << "전화번호: " << phoneNumber << std::endl;
	return 0; 
}