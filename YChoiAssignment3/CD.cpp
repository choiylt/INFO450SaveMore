#include "stdafx.h"
#include "GeneralAccount.h"
#include "CD.h"
#include <iostream>

CD::CD() : GeneralAccount()
{
	withdraw = 0;
	term = 0;
}

CD::CD(int a, double b, double i, int w, int t) : GeneralAccount(a, b, i)
{

	withdraw = w;
	term = t;
}

//Method to show the following attributes 

void CD::Display()
{
	cout << "CD Account Number " << accNum << endl;
	cout << "Balance: $" << balance << endl;
	cout << "Current interest is: " << interest << endl;
	cout << "CD Term is: " << term << endl;
}

void CD::Input()

//Create CD Account

{
	accNum = 5762;
	balance = 10000;
	interest = 0.05;
	withdraw = 0.1;
	term = 3;
}

//Calculates monthly interest

double CD::MonthlyInterest(int t)
{
	//CD interest

	double inte;

	if (t >= 5)
	{
		inte = 0.10;
	}
	else
	{
		inte = 0.05;
	}

	//Make interest rate monthly

	inte = inte / 12;

	balance += balance*inte;

	return balance;
}

double CD::WithdrawCD(int w)
{

	if (w > 0)

	{
		//Show the balance with the withdrawl amount in addition to the fee

		balance = balance - w*1.1;
	}
	return balance;
}