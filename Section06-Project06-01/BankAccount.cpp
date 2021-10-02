#include "BankAccount.h"
#include <iostream>

BankAccount::BankAccount(string owner){
	this->owner = owner;
	this->balance = 0;
}

BankAccount::BankAccount(string owner, int balance)
{
	this->owner = owner;
	if (balance <= 0) {
		cout << "You must enter a balance better than 0." << endl;
	}
	else {
		this->balance = balance;
	}
} 

void BankAccount::deposit(int amount)
{
	if (amount <= 0) {
		cout << "You cannot deposit less or equal to 0." << endl;
	}
	else {
		balance += amount;
	}
}

void BankAccount::withdraw(int amount)
{
	if (amount <= 0 || amount > balance) {
		cout << "You cannot withdraw less or equal to 0 or more than what you have in balance." << endl;
	}
	else {
		balance -= amount;
	}
}

string BankAccount::getOwner() const
{
	return owner;
}

int BankAccount::getBalance() const
{
	return balance;
}