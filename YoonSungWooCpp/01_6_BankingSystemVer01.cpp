#include <iostream>
#include <string>


typedef struct
{
	int bankID; // 계좌번호
	std::string name; //이름
	long long balance; //잔액
}BankAccount;


enum class SELECT : unsigned short{
	CREATE =1,
	DEPOSIT,
	WITHDRAW,
	SHOW,
	EXIT
};

void createBankAccount(BankAccount& accountArr, int& accountNumber)
{
	std::cout << "[계좌개설]" << std::endl;
	BankAccount* newAccount = new BankAccount;
	std::cout << "계좌ID: ";
	std::cin >> newAccount->bankID;
	std::cout << "이름: ";
	std::cin >> newAccount->name;
	std::cout << "입금액: ";
	std::cin >> newAccount->balance;
	accountArr = *newAccount;
	delete newAccount;
	accountNumber++;
}

void depositMoney(BankAccount* accountArr, const int accountNumber)
{
	std::cout << "계좌ID: ";
	int depositBankID, money;
	std::cin >> depositBankID;
	std::cout << "입금액: ";
	std::cin >> money;
	for (int i = 0; i < accountNumber; i++)
	{
		if (accountArr[i].bankID == depositBankID)
		{
			accountArr[i].balance += money;
			std::cout << accountArr[i].name <<"님 잔액이 입금 완료되었습니다. " << std::endl;
			return;
		}
	}
	std::cout << "유효하지 않은 ID입니다." << std::endl;
}

void withdrawMoney(BankAccount* accountArr, const int accountNumber)
{
	std::cout << "계좌ID: ";
	int depositBankID, money;
	std::cin >> depositBankID;
	std::cout << "출금액: ";
	std::cin >> money;
	for (int i = 0; i < accountNumber; i++)
	{
		if (accountArr[i].bankID == depositBankID)
		{
			accountArr[i].balance -= money;
			std::cout << accountArr[i].name << "님 " << money <<"원이 출금 완료되었습니다." << std::endl;
			std::cout << "잔액은 " << accountArr[i].balance << "원 입니다." << std::endl;
			return;
		}
	}
	std::cout << "유효하지 않은 ID입니다." << std::endl;
}

void showAllAccountInfo(BankAccount* accountArr, const int accountNumber)
{
	std::cout << "다음은 전체 계좌 정보입니다. " << std::endl << std::endl;
	for (int i = 0; i < accountNumber; i++)
	{
		std::cout << "계좌ID : " << accountArr[i].bankID << std::endl;
		std::cout << "이름 : " << accountArr[i].name << std::endl;
		std::cout << "잔액 : " << accountArr[i].balance<< std::endl << std::endl;
	}
}

int main()
{
	const int MAX_ACCOUNT = 100;
	BankAccount accountArr[MAX_ACCOUNT] = {};
	int accountNumber = 0;
	while (true)
	{
		std::cout << "-----Menu-----" << std::endl;
		std::cout << "1. 계좌개설" << std::endl;
		std::cout << "2. 입금" << std::endl;
		std::cout << "3. 출금" << std::endl;
		std::cout << "4. 계좌번호 전체 출력" << std::endl;
		std::cout << "5. 프로그램 종료" << std::endl;
		std::cout << "선택: ";
		int selectNumber = -1;
		std::cin >> selectNumber;
		
		switch (static_cast<SELECT>(selectNumber))
		{
		case SELECT::CREATE:
			createBankAccount(accountArr[accountNumber],accountNumber);
			break;
		case SELECT::DEPOSIT:
			depositMoney(accountArr, accountNumber);
			break;
		case SELECT::WITHDRAW:
			withdrawMoney(accountArr, accountNumber);
			break;
		case SELECT::SHOW:
			showAllAccountInfo(accountArr, accountNumber);
			break;
		case SELECT::EXIT:
			std::cout << "프로그램이 종료되었습니다. " << std::endl;
			return 0;
		default:
			std::cout << "유효하지 않은 숫자입니다. 다시 입력해주세요. " << std::endl;
			break;
		}

	}
	return 0; 
}