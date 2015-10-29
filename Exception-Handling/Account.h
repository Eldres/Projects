#ifndef _Account_H
#define _Account_H

#include <iostream>
#include <string>
using namespace std;

class Exception_Neg_Deposit:public exception {
	public:
		const char *what() const throw() {
			return "Cannont deposit a negative amount of money.";
		}
};

class Exception_Overdraw:public exception {
	public:
		const char *what() const throw() {
			return "Overdrawn! Cannot withdraw more money than available in account.";
		}
};

class Exception_Neg_Withdraw :public exception {
	public:
		const char *what() const throw() {
			return "Cannot withdraw a negative amount of money.";
		}
};

class Account {
	private:
		double balance;
	public:
		Account():balance(0) {};//default constructor
		Account(double initialDeposit):balance(initialDeposit) {};//Constructor
		double getBalance();
		double deposit(double amount) throw (Exception_Neg_Deposit);
		double withdraw(double amount) throw (Exception_Neg_Withdraw, Exception_Overdraw);
};

#endif
