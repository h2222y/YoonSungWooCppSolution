#include <iostream>
using namespace std;

int main()
{
	int tempNum = 0, sum=0;
	for (int i = 1; i <= 5; i++)
	{
		cout << i << "��° ���� �Է�: ";
		cin >> tempNum;
		sum += tempNum;
	}
	cout << "�հ�: " << sum << endl;
	
	return 0; 
}