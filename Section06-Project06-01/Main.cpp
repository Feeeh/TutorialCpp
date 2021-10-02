#include "BankAccount.h"
#include <iostream>

using namespace std;

int main()
{
	BankAccount myAccount("Felipe G.", 5000);
	BankAccount bobsAccount("Bob");

	bobsAccount.deposit(500);
	cout << "Bob's account contains " << bobsAccount.getBalance() << endl;

	bobsAccount.withdraw(1000);
	cout << "Bob's still contains " << bobsAccount.getBalance() << endl;

	cout << myAccount.getOwner() << " account contains " << myAccount.getBalance() << endl;

	return 0;
}