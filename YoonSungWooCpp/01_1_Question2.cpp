#include <iostream>

int main()
{
	char name[100] = {};
	char phoneNumber[100] = {};
	std::cout << "�̸� �Է�: ";
	std::cin >> name;
	std::cout << "��ȭ��ȣ �Է�: "; 
	std::cin >> phoneNumber;
	std::cout << "�̸�: " << name << std::endl;
	std::cout << "��ȭ��ȣ: " << phoneNumber << std::endl;
	return 0; 
}