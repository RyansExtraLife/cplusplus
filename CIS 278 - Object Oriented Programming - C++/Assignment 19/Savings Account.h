/*
 Main written by Ryan Patterson
 Class CIS 278
*/

#ifndef SAVINGSACCOUNT_H
#define SAVINGSACCOUNT_H

class SavingsAccount{

    private:
    double savingsBalance;
    static double annualInterestRate;
    
    public:
    SavingsAccount( double, double );
    void setAnnualInterestRate( double );
    void getAnnualInterestRate();
    void calculateMonthlyInterest();
    static void modifyInterestRate( double );
    void print() const;
};

#endif
