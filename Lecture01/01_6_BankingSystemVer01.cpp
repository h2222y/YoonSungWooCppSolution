#include <iostream>
#include <string>


typedef struct
{
	int bankID; // ���¹�ȣ
	std::string name; //�̸�
	long long balance; //�ܾ�
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
	std::cout << "[���°���]" << std::endl;
	BankAccount* newAccount = new BankAccount;
	std::cout << "����ID: ";
	std::cin >> newAccount->bankID;
	std::cout << "�̸�: ";
	std::cin >> newAccount->name;
	std::cout << "�Աݾ�: ";
	std::cin >> newAccount->balance;
	accountArr = *newAccount;
	delete newAccount;
	accountNumber++;
}

void depositMoney(BankAccount* accountArr, const int accountNumber)
{
	std::cout << "����ID: ";
	int depositBankID, money;
	std::cin >> depositBankID;
	std::cout << "�Աݾ�: ";
	std::cin >> money;
	for (int i = 0; i < accountNumber; i++)
	{
		if (accountArr[i].bankID == depositBankID)
		{
			accountArr[i].balance += money;
			std::cout << accountArr[i].name <<"�� �ܾ��� �Ա� �Ϸ�Ǿ����ϴ�. " << std::endl;
			return;
		}
	}
	std::cout << "��ȿ���� ���� ID�Դϴ�." << std::endl;
}

void withdrawMoney(BankAccount* accountArr, const int accountNumber)
{
	std::cout << "����ID: ";
	int depositBankID, money;
	std::cin >> depositBankID;
	std::cout << "��ݾ�: ";
	std::cin >> money;
	for (int i = 0; i < accountNumber; i++)
	{
		if (accountArr[i].bankID == depositBankID)
		{
			accountArr[i].balance -= money;
			std::cout << accountArr[i].name << "�� " << money <<"���� ��� �Ϸ�Ǿ����ϴ�." << std::endl;
			std::cout << "�ܾ��� " << accountArr[i].balance << "�� �Դϴ�." << std::endl;
			return;
		}
	}
	std::cout << "��ȿ���� ���� ID�Դϴ�." << std::endl;
}

void showAllAccountInfo(BankAccount* accountArr, const int accountNumber)
{
	std::cout << "������ ��ü ���� �����Դϴ�. " << std::endl << std::endl;
	for (int i = 0; i < accountNumber; i++)
	{
		std::cout << "����ID : " << accountArr[i].bankID << std::endl;
		std::cout << "�̸� : " << accountArr[i].name << std::endl;
		std::cout << "�ܾ� : " << accountArr[i].balance<< std::endl << std::endl;
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
		std::cout << "1. ���°���" << std::endl;
		std::cout << "2. �Ա�" << std::endl;
		std::cout << "3. ���" << std::endl;
		std::cout << "4. ���¹�ȣ ��ü ���" << std::endl;
		std::cout << "5. ���α׷� ����" << std::endl;
		std::cout << "����: ";
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
			std::cout << "���α׷��� ����Ǿ����ϴ�. " << std::endl;
			return 0;
		default:
			std::cout << "��ȿ���� ���� �����Դϴ�. �ٽ� �Է����ּ���. " << std::endl;
			break;
		}

	}
	return 0; 
}