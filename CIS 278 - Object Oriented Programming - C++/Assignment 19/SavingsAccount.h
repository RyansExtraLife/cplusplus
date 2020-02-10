/*
 Main written by Ryan Patterson
 Class CIS 278
*/
#ifndef Assignment_19_SavingsAccount_h
#define Assignment_19_SavingsAccount_h

class SavingsAccount{
    
    private:
    double savingsAccountBalance;
    static double annualInterestRate; // Allows user to change the interest rate.
    
    public:
    SavingsAccount( double, double ); // Constructor that enables the class Savings Account. 
    void setAnnualInterestPersentage ( double ); // Sets the Annual Interest Rate.
    double getAnnualInterestPersentage ( double ); // Gets the Annual Interst Rate.
    void calculateMonthlyInterest(); // Calcualtes the current monthly interst. 
    void modifyInterestPersentage ( double ); // Changes the Annual Interst Rate.
    void print() const;
};


#endif
