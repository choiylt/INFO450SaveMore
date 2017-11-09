#pragma once

using namespace std;

//Used to define the other three accounts

class GeneralAccount {

protected:
	int accNum;
	double balance;
	double interest;

public:
	GeneralAccount();
	GeneralAccount(int a, double b, double i);
	virtual void Display() = 0;
	virtual void Input() = 0;
};

