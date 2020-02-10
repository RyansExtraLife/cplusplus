/*
 Main written by Ryan Patterson
 Online class CIS 118
*/

#include <iostream>

using namespace std;

int main ( ){
    
    int pointsEarned = 0;
    
    // The base variable and assignment of base value "0"
    cout << "Enter the points earned by the student: ";
    cin >> pointsEarned;
    
    // If it does not meet the criteria it will drop down to 80-90.
    // If the letter grade is equel to or less then 100, but no lower then 90 the student will get a "A"
    if ((pointsEarned > 90) && (pointsEarned <= 100)){
        cout << "The Grade Earned is: " << "A";
    }
    // If it does not meet the criteria it will drop down to 70-80.
    // If the letter grade is less then 90 but higher then 79.99 the student will recieve a "B"
    else if ((pointsEarned > 80) && (pointsEarned < 90)){
        cout << "The Grade Earned is: " << "B";
    }

    // If it does not meet the criteria it will drop down to 60-70.
    // If the letter grade is less then 80 but higher then 69.99 the student will recieve a "C"
    else if ((pointsEarned > 70) && (pointsEarned < 80)){
        cout << "The Grade Earned is: " << "C";
    }
    // If it does not meet the criteria it will drop down to 0-60.
    // If the letter grade is less then 70 but higher then 59.99 the student will recieve a "D"
    else if ((pointsEarned > 60) && (pointsEarned < 70)){
        cout << "The Grade Earned is: " << "D";
    }
    // The grade cannot drop lower so this ends the "else if"
    // If the letter grade is less then 60 the student will get a fat "F"
    else if ((pointsEarned >= 0) && (pointsEarned < 60)){
        cout << "The Grade Earned is: " << "F";
    }

    cout << endl;
    return 0;
}
