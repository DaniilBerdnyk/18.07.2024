#include "Investment.h"

Investment::Investment()
{
    name = "Undefined";
    money = 0;
}

Investment::Investment(string name, float money)
{
    this->name = name;
    this->money = money;
}

void Investment::setName(string name)
{
    this->name = name;
}

void Investment::setMoney(float money)
{
    this->money = money;
}

string Investment::getName() const
{
    return name;
}

float Investment::getMoney() const
{
    return money;
}
