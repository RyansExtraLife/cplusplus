/*
 Main written by Ryan Patterson
 Online class CIS 118
*/

#include <iostream>

using namespace std;

int main()
{
    int numberChoice =0;
    double var1, var2;
    
    for (int loopend=1; loopend<=5; loopend ++){
        cout << "Please make a selection: " << endl;
        cout << "1) Addition" << endl;
        cout << "2) Subtraction" << endl;
        cout << "3) Multiplication" << endl;
        cout << "4) Division" << endl;
        cin >> numberChoice;
        numberChoice = loopend;
    }
    if (numberChoice == 1){
        cout << "Please enter the first whole number ";
        cin >> var1;
        cout << "Please enter the second whole number ";
        cin >> var2;
        cout << "The result is " << (var1+var2) << endl;
        cout << "   " << endl;
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
    system ("pause");
    return 0;
}
