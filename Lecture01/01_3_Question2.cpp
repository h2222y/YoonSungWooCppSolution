#include <iostream>

// �Ʒ� �����ε��� ������ �߻��ϴ� ������?
int SimpleFunc(int a = 10)
{
	return a + 1;
}

int SimpleFunc(void)
{
	return 10;
}

// int a=10�� default�� �����Ǿ� �ֱ� ������, �ƹ��� ���ڵ� �������� �ʾ��� �� �ƹ� ���ڸ� ���� �ʴ� �Լ��� default ���� �ִ� �Լ��� �浹�Ѵ�.

