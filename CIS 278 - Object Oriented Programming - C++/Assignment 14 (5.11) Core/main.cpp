/*
 Main written by Ryan Patterson
 Class CIS 278
*/

#include <iostream>
#include <cmath>
#include <iomanip>

class Interest{
    public:
    void interestRates(){
        using namespace std;
        
        double amount;
        double principal =0;
        int selection;
        double ratefivepercent = .05;
        double ratesixpercent = .06;
        double ratesevenpercent = .07;
        double rateeigthpercent = .08;
        double rateninepercent = .09;
        double ratetenpercent = .10;
            
        cout << "Please input an amount of money that you would like to deposte: " << endl;
        cin >> principal;
            
        cout << endl << "Now choose the number associated witht the interest rate you would like to see. " << endl;
        cout << "1.) .05% interest" << endl;
        cout << "2.) .06% interest" << endl;
        cout << "3.) .07% interest" << endl;
        cout << "4.) .08% interest" << endl;
        cout << "5.) .09% interest" << endl;
        cout << "6.) .10% interest" << endl;
        cin >> selection;
            
        if (selection ==1){
            cout << "<-----Interest rate for " << ratefivepercent << " ------>" <<endl;
            for (int year = 1; year <=10; year ++){
                amount = principal * pow(1.0 + ratefivepercent, year);
                cout << setw( 4 ) << year << setw(21) << amount << setw(12) << ratefivepercent << " % interest rate" << endl;
            }
            cout << endl;
        }
        if (selection ==2){
            cout << "<-----Interest rate for " << ratesixpercent << " ------>" <<endl;
            for (int year = 1; year <=10; year ++){
                amount = principal * pow(1.0 + ratesixpercent, year);
                cout << setw( 4 ) << year << setw(21) << amount << setw(12) << ratesixpercent <<" % interest rate" <<endl;
            }
            cout << endl;
        }
        if (selection ==3){
            cout << "<-----Interest rate for " << ratesevenpercent << " ------>" <<endl;
            for (int year = 1; year <=10; year ++){
                amount = principal * pow(1.0 + ratesevenpercent, year);
                cout << setw( 4 ) << year << setw(21) << amount << setw(12) << ratesevenpercent <<" % interest rate" <<endl;
            }
            cout << endl;
        }
        if (selection ==4){
            cout << "<-----Interest rate for " << rateeigthpercent << " ------>" <<endl;
            for (int year = 1; year <=10; year ++){
                amount = principal * pow(1.0 + rateeigthpercent, year);
                cout << setw( 4 ) << year << setw(21) << amount << setw(12) << rateeigthpercent <<" % interest rate" <<endl;
            }
            cout << endl;
        }
        if (selection ==5){
            cout << "<-----Interest rate for " << rateninepercent << " ------>" <<endl;
            for (int year = 1; year <=10; year ++){
                amount = principal * pow(1.0 + rateninepercent, year);
                cout << setw( 4 ) << year << setw(21) << amount << setw(12) << rateninepercent <<" % interest rate" <<endl;
            }
            cout << endl;
        }
        if (selection ==6){
            cout << "<-----Interest rate for " << ratetenpercent << " ------>" <<endl;
            for (int year = 1; year <=10; year ++){
                amount = principal * pow(1.0 + ratetenpercent, year);
                cout << setw( 4 ) << year << setw(21) << amount << setw(12) << ratetenpercent <<" % interest rate" <<endl;
            }
        }
    }
};

int main (){
    Interest Q5_11;
    Q5_11.interestRates();
 
    return 0; 
}

