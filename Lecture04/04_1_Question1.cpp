#include <iostream>
using namespace std;

class FruitSeller
{
public:
	void initMembers(const int price, const int num, const int money)
	{
		APPLE_PRICE = price;
		numOfApples = num;
		myMoney = money;
	}
	int saleApples(const int money) 
	{
		if (money <= 0)
		{
			cout << "You need to enter the positive number." << endl << endl;
			return 0;
		}
		int num = money / APPLE_PRICE;
		numOfApples -= num;
		myMoney += money;
		return num;
	}
	void showSalesResult() const
	{
		cout << "rest Apples : " << numOfApples << endl;
		cout << "sales revenue : " << myMoney << endl;
	}

private:
	int APPLE_PRICE;
	int numOfApples;
	int myMoney;
};

class FruitBuyer
{
public:
	void initMembers(const int money)
	{
		myMoney = money;
		numOfApples = 0;
	}
	void buyApples(FruitSeller& seller, const int money)
	{
		if (money < 0)
		{
			cout << "You need to enter the positive number."<<endl << endl;
			return;
		}

		numOfApples += seller.saleApples(money);
		myMoney -= money;
	}
	void showBuyResult() const
	{
		cout << "rest Money : " << myMoney << endl;
		cout << "Number of Apples : " << numOfApples << endl;
	}

private:
	int myMoney;
	int numOfApples;

};
int main()
{
	FruitSeller seller;
	seller.initMembers(1000, 20, 0);
	FruitBuyer buyer;
	buyer.initMembers(5000);
	buyer.buyApples(seller, -3);

	cout << "Current situation of fruit seller" << endl;
	seller.showSalesResult();
	cout << "Current situation of fruit seller" << endl;
	buyer.showBuyResult();
	return 0;
}