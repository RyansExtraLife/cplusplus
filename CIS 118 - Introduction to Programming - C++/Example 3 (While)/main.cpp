/*
 Main written by Ryan Patterson
 Online class CIS 118
*/

#include <iostream>

using namespace std;

int main()
{
    int numberChoice;
    numberChoice =0;
    double var1, var2;
   
    while (numberChoice != 1 && numberChoice != 2 && numberChoice != 3 && numberChoice != 4){
        cout << "Please make a selection: " << endl;
        cout << "1) Addition" << endl;
        cout << "2) Subtraction" << endl;
        cout << "3) Multiplication" << endl;
        cout << "4) Division" << endl;cin >> numberChoice;
    }
    if (numberChoice == 1){
        cout << "Please enter the first whole number ";
        cin >> var1;
        cout << "Please enter the second whole number ";
        cin >> var2;
        cout << "The result is " << (var1+var2) << endl;
    }
    if (numberChoice == 2){
        cout << "Please enter the first whole number ";
        cin >> var1;
        cout << "Please enter the second whole number ";
        cin >> var2;
        cout << "The result is " << (var1-var2) << endl;
    }
    if (numberChoice == 3){
        cout << "Please enter the first whole number ";
        cin >> var1;
        cout << "Please enter the second whole number ";
        cin >> var2;
        cout << "The result is " << (var1*var2) << endl;
    }
    if (numberChoice == 4){
        cout << "Please enter the first whole number ";
        cin >> var1;
        cout << "Please enter the second whole number ";
        cin >> var2;
        cout << "The result is " << (var1/var2) << endl;
    }
    return 0;
}
