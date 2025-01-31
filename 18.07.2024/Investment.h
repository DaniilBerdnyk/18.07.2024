#pragma once
#include<string>
#include<string>
#include<iostream>
////фіо вкладника (get, set) 
//
//сума вкладу(get, add, del)
//
//розрахувати суму вкладу(кількість місяців)
using namespace std;

class Investment
{
	string name;
	float money;
public:
	Investment();
	Investment(string name, float money);

	void setName(string name);
	void setMoney(float money);


	string getName()const;
	float getMoney()const;

	virtual float Calculate() = 0;

	void AddMoney(float summ);
	void DelMoney(float summ);

	string getName()const;
	float getMoney()const;

	virtual float Calculate(int month)const = 0;
	virtual void ShowInfo()const = 0;


};

