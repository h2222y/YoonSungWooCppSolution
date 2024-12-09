#include <iostream>

// 아래 오버로딩이 문제가 발생하는 이유는?
int SimpleFunc(int a = 10)
{
	return a + 1;
}

int SimpleFunc(void)
{
	return 10;
}

// int a=10이 default로 지정되어 있기 때문에, 아무런 인자도 전달하지 않았을 때 아무 인자를 받지 않는 함수와 default 값이 있는 함수가 충돌한다.

