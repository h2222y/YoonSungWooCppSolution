#include <iostream>

void SwapByRef2(int& ref1, int& ref2)
{
	int temp = ref1;
	ref1 = ref2;
	ref2 = temp;
}

int main()
{
	int val1 = 10;
	int val2 = 20;

	SwapByRef2(val1,val2);
	std::cout << "val1 : " << val1 << std::endl;
	std::cout << "val2 : " << val2 << std::endl;

	// SwapByRef2(23, 45); 이 코드는 reference에 상수값을 전달하기 때문에 오류를 발생시킨다.  
	return 0; 
}