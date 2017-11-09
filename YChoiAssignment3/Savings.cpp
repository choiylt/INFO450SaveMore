#include "stdafx.h"
#include "GeneralAccount.h"
#include "Savings.h"
#include <iostream>

Savings::Savings() : GeneralAccount()
{
	withdraw = 0;
	interestGained = 0;
}

Savings::Savings(int a, double b, double i, int w, double sb) : GeneralAccount(a, b, i)
{

	withdraw = w;
	interestGained = sb;
}

//Create Savings Account

void Savings::Input()
{
	accNum = 5763;
	balance = 6000;
	interest = 0.01;
	withdraw = 2;

}

//Calculates the amount of interest gained per month and the new balance.

double Savings::MonthlyInterest(double sb)
{
	double si;

	if (sb >= 10000)
	{
		si = 0.02;
	}
	else
	{
		si = 0.01;
	}

	//Breaks yearly interest to monthly

	si = si / 12;

	//Interest gained 

	sb = sb*si;

	//Returns the updated balance

	balance += balance * si;

	return balance;
	return sb;
	return si;
}

//Calculates the new balance after taking out of Savings

double Savings::WithdrawSaving(int w)
{

	balance = balance - w - 2;
	return balance;
}

//Shows the account number, balance, and interest.

void Savings::Display()
{
	cout << "Savings Account Number " << accNum << endl;
	cout << "Balance: $" << balance << endl;
	cout << "Interest " << interest << endl;
}