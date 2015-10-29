#include <iostream>
#include "Account.h"

using namespace std;

double Account::deposit(double amount) throw(Exception_Neg_Deposit){
	Exception_Neg_Deposit eNegDeposit;
	if (amount < 0) {
		throw eNegDeposit;
	}
	else {
		balance += amount;
	}
	return balance;
}

double Account::withdraw(double amount) throw(Exception_Neg_Withdraw, Exception_Overdraw){
	Exception_Overdraw eOver;
	Exception_Neg_Withdraw eNegWithdraw;

	if (amount > balance) {
		throw eOver;
	}
	else if(amount < 0)
	{
		throw eNegWithdraw;
	}
	else
	{
		balance -= amount;
	}
	return balance;
}

double Account::getBalance()
{
	return balance;
}
