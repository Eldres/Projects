#include <iostream>
#include "Account.h"

using namespace std;

int main() {
	Account object(100);

	cout << "Balance: $" << object.getBalance() << endl;

	try {
		object.deposit(50);
		cout << "Deposit complete. New Balance: $" << object.getBalance() << endl;
	} 
	catch (exception &e) {
		cout << e.what() << endl;
	}

	try {
		object.deposit(-20);
	}
	catch (Exception_Neg_Deposit &e) {
		cout << e.what() << endl;
	}

	try {
		object.withdraw(50);
		cout << "Withdrawn complete. New Balance: $" << object.getBalance() << endl;
	}
	catch (exception &e) {
		cout << e.what() << endl;
	}

	try {
		object.withdraw(200);
	}
	catch (Exception_Overdraw &e) {
		cout << e.what() << endl;
	}

	try {
		object.withdraw(-50);
	}
	catch (Exception_Neg_Withdraw &e) {
		cout << e.what() << endl;
	}

	return 0;
}
