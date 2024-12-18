#include <iostream>

void SwapPointer(int* ptr1, int* ptr2)
{
	int temp = *ptr1;
	*ptr1 = *ptr2;
	*ptr2 = temp;
}

int main()
{
	int num1 = 5;
	int* ptr1 = &num1;
	int num2 = 10;
	int* ptr2 = &num2;
	SwapPointer(ptr1, ptr2);

	std::cout << "num1 After Swap : " << num1 << std::endl;
	std::cout << "num2 After Swap : " << num2 << std::endl;
	return 0;
}