#pragma once
#include "GeneralAccount.h"

//Declares the Class
class CD : public GeneralAccount
{

private:

	int withdraw;
	int term;

public:
	CD();
	CD(int a, double b, double i, int w, int t);
	void Input();
	void Display();

	//Calculates monthly interest

	double MonthlyInterest(int t);

	//Calculates early withdrawl

	double WithdrawCD(int w);
};