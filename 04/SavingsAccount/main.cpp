#include<iostream>
#include"SavingsAccount.h"


int main(){
    SavingsAccount  saver1 = SavingsAccount(2000);
    SavingsAccount saver2 = SavingsAccount(3000);

    std::cout << saver1.calculateMonthlyInterest() << std::endl;

    std::cout << saver2.calculateMonthlyInterest() << std::endl;

    saver1.modifyAnnualInterestRate(3);

    std::cout << saver1.calculateMonthlyInterest() << std::endl;

    std::cout << saver2.calculateMonthlyInterest() << std::endl;

    saver1.modifyAnnualInterestRate(4);

    std::cout << saver1.calculateMonthlyInterest() << std::endl;

    std::cout << saver2.calculateMonthlyInterest() << std::endl;


    return 0;
}