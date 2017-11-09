#pragma once
#include "GeneralAccount.h"

//Checking Account Header

//Declaring Class name, and it's relationship to GeneralAccount

class Checking : public GeneralAccount
{
private:

	
	int Checks;
	int withdraw;

public:
	Checking();
	Checking(int a, double i, double b, int c, int w);
	void Input();
	void Display();
	
	//Shows the Balance of Checking Account
	
	void CheckBal();
	
	//Goes through with withdrawl of money from the checking account.
	
	double WithdrawChecking(int w);

	double Order();
};