/*
 Main written by Ryan Patterson
 Class CIS 278
*/
//  Created by Ryan Michael on 10/31/13.
//  Copyright (c) 2013 Ryan Michael. All rights reserved.
//

#include <iostream>
#include <iomanip>
#include "SavingsAccount.h"
using namespace std;

double SavingsAccount::annualInterestRate = 0.0;

// Calls Constructor in class SavingsAccount
SavingsAccount::SavingsAccount( double bal, double AIP ){
    savingsAccountBalance = ( bal >= 0.0 ? bal : 0.0 );
    setAnnualInterestPersentage(AIP);
}

// Calls Method setAnnualPersentage
void SavingsAccount::setAnnualInterestPersentage( double AIP){
    annualInterestRate = ( AIP >= 0.0 && AIP <= 1.0) ? AIP: .03;
}

// Calls Method getAnnualPersentage
double SavingsAccount::getAnnualInterestPersentage(double){
    return annualInterestRate;
}

// Calls Method calculateMonthlyInterest
void SavingsAccount::calculateMonthlyInterest(){
    savingsAccountBalance += savingsAccountBalance * ( annualInterestRate / 12);
}

//Calls Method modifyInterstPersentage
void SavingsAccount::modifyInterestPersentage(double interest){
    annualInterestRate = (interest >= 0.0 && interest <= 1.0) ? interest : .04;
}

// Function used to call a print. 
void SavingsAccount::print() const{
    cout << fixed << setprecision(2) << "$" << savingsAccountBalance;
}


int main(){
    SavingsAccount saver1( 2000.0,.03);
    SavingsAccount saver2( 3000.0,.03);

    cout << "Balance for Saver 1: "         <<endl;
    cout << "Balance for Saver 2: "         <<endl;
    cout << "Interest Rate for Saver 1 and Saver 2 is currenlty: " << "%";

    saver1.calculateMonthlyInterest();
    saver2.calculateMonthlyInterest();

    
    cout << "Saver 1 with 3% interest: " << endl;
    cout << "Saver 2 with 3% interest: " << endl << endl;
    cout << endl << endl << "Setting Annual Interest Rate to 4%" << endl;

    saver1.annualInterestRate(.04);
    saver2.annualInterestRate(.04);
    saver1.calculateMonthlyInterest();
    saver2.calculateMonthlyInterest();

    cout << "Saver 1 with 4% interest: " << endl;
    cout << "Saver 2 with 4% interest: " << endl;

    cout << endl;
    return 0;
}
