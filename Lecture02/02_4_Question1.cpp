#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>

int main()
{
	const char *str1 = "Hello ";
	const char *str2 = "World! ";
	char str3[20] = {};

	std::cout << strlen(str1) << std::endl;
	std::cout << strlen(str2) << std::endl;
	std::cout << strcat(str3, str2)<< std::endl;
	std::cout << strcpy(str3, str2)<< std::endl;
	std::cout << strcmp(str1, str2) << std::endl;
	return 0; 
}