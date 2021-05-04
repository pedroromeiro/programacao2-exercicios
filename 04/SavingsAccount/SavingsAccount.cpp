#include <iostream>
#include "SavingsAccount.h"

double SavingsAccount::annualInterestRate = 0;

SavingsAccount::SavingsAccount(double savingsBalance) {
    this->savingsBalance = savingsBalance;
}

void SavingsAccount::modifyAnnualInterestRate(double annualInterestRate) {
    SavingsAccount::annualInterestRate = annualInterestRate;
}

double SavingsAccount::calculateMonthlyInterest() {
    savingsBalance += savingsBalance * SavingsAccount::annualInterestRate / 12;
    return savingsBalance;
}