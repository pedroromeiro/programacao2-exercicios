class SavingsAccount {
private:
    double savingsBalance;
public:
    static double annualInterestRate;
    static void modifyAnnualInterestRate(double annualInterestRate);

    double calculateMonthlyInterest();
    SavingsAccount(double savingsBalance);

    
};