/*
 Main written by Ryan Patterson
 Online class CIS 118
*/


#include <iostream>

using namespace std;

int main ( ){
    // Start program
    // Declare and Initialize Variables
    int height = 0;
    int feet = 0;
    
    // The line of code did not have a ";" after it.
    int inches = 0;
    
    // Prompt for height
    cout << "Enter your height in inches: ";
    cin >> height;
    
    // Calculate Height in feet and inches
    feet = height / 12;
    inches = height % 12;
    
    // Print out height in feet and inches
    // All of the << were in the incorrect order, changed to output
    cout << endl << endl << "You are: " << feet << " feet and " << inches << " inches" << endl;
    return 0;
}
// end of program
