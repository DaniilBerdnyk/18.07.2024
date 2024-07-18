#include "LongInvestment.h"

LongInvestment::LongInvestment() : Investment()
{
	
}

LongInvestment::LongInvestment(string name, float money) : Investment(name, money)
{

}

float LongInvestment::Calculate(int month) const
{
	float result;
	float money;
	while (month >= 12) {
		result = money + money * longInvestment;
		month = month - 12;
	}
	return result;
}

void LongInvestment::ShowInfo() const
{
	cout << "Long investment: " << endl;
	cout << "Name: " << getName() << endl;
	cout << "Money: " << getMoney() << endl;
}
