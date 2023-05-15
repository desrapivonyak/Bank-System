#include "Bank.h"
#include <iostream>

Bank::Bank(const double money, int acc, double amm) {
	this->m_money = money;
	this->m_account[acc] = amm;
}

void Bank::setMoney(double m) {
	this->m_money = m;
}

double Bank::getMoney() const {
	return this->m_money;
}

void Bank::setBalance(const int acc, const double st) {
	this->m_account[acc] = st;
}

double Bank::getBalance(int acc){
	return this->m_account[acc];
}


void Bank::withdraw(double m, int account_number) {
	if (m > 0) {
		this->m_account[account_number] -= m;
		this->m_money -= m;
	}
	else {
		std::cout << "Invlaid account number or withdrawal amount exceeded account balance.";
	}
}

void Bank::deposit(double m, int account_number) {
	if (m > 0) {
		this->m_account[account_number] += m;
		this->m_money += m;
	}
	else {
		std::cout << "Invlaid account number or invalid amount to deposit account balance.";
	}
}