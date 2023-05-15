#pragma once
#include <unordered_map>

class Bank
{
private:
	double m_money;
	std::unordered_map<int, double> m_account;

public:
	Bank(const double, int, double);
	~Bank() = default;

	void setMoney(const double);
	double getMoney() const;

	void setBalance(const int, const double);
	double getBalance(int);

	void withdraw(double, int);
	void deposit(double, int);
};

