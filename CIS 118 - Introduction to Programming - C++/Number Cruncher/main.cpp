/*
 Main written by Ryan Patterson
 Online class CIS 118
 */

#include <iostream>

using namespace std;

int main(){
    // Interger to hold the number that the user has most recently entered.
    int number = 0;
    // Interger to hold the number of times the user wants to imput a number.
    int howManyIntergers = 0;
    //number of times the loop has run. Set to one because its going to run once on its own.
    int howManyEntered = 1;
    // Interger assigned to hold the grand total.
    int total =0;
    //Ask the user how many Intergers they want to add.
    cout << "How many Integers do you want to add:";
     // The number of times the loop will take place is then stored here.
    cin >> howManyIntergers;
    // opening of the do while loop.
    do{
        // Text for user to read.
        cout << "Enter an Integer:";
        // Input of the user added to "number"
        cin >> number;
        // Takes the total and adds it to the most recently imputed number.
        total = total + number;
        // Increases the number of times the loop has ran by 1.
        howManyEntered ++;
    // when the user input matchs the times the loop has run.
    }while(howManyEntered <= howManyIntergers);
    cout << "The sum of all the Intergers is: " << total << endl;
    return 0;
}
    
