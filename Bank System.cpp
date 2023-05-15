#include <iostream>
#include "Bank.h"

int main()
{
    Bank Ineco{ 100000.0, 250055, 0.0 };

    std::cout << Ineco.getMoney() << std::endl;
    std::cout << Ineco.getBalance(250055) << std::endl;
    Ineco.deposit(1500, 250055);
    std::cout << Ineco.getMoney() << std::endl;
    std::cout << Ineco.getBalance(250055) << std::endl;
}