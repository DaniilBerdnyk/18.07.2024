#include "DepositeDemand.h"

DepositeDemand::DepositeDemand()
{
}

DepositeDemand::DepositeDemand(string name, float money)
{
}

float DepositeDemand::Calculate(int month) const
{
	float result;
	float money;
	while (month >= 12) {
		result = money + money * depositeDemand;
		month = month - 12;
	}
	return result;
}

void DepositeDemand::ShowInfo() const
{
	cout << "Deposite demand: " << endl;
	cout << "Name: " << getName() << endl;
	cout << "Money: " << getMoney() << endl;
}
