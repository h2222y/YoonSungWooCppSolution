#include <iostream>
using namespace std;

int main()
{
	int tempNum = 0, sum=0;
	for (int i = 1; i <= 5; i++)
	{
		cout << i << "번째 정수 입력: ";
		cin >> tempNum;
		sum += tempNum;
	}
	cout << "합계: " << sum << endl;
	
	return 0; 
}