#include "stdafx.h"
#include "GeneralAccount.h"
#include "Checking.h"
#include <iostream>

using namespace std;

Checking::Checking() : GeneralAccount()
{
	Checks = 0;
}

Checking::Checking(int a, double b, double i, int c, int w) : GeneralAccount(a, b, i)
{
	Checks = c;
}

void Checking::Display()
{
	cout << "Checking Account Number " << accNum << endl;
	cout << "Balance: $" << balance << endl;
}

void Checking::Input()
{
	accNum = 5761;
	balance = 10000;
	interest = 0;
	Checks = 15;
}

void Checking::CheckBal()
{
	if (balance < 500)
	{
		balance = balance - 5;
	}
}
double Checking::WithdrawChecking(int w)
{

	balance = balance - w;
	return balance;
}

double Checking::Order()
{
	balance = balance - 15;
	return balance;
}
