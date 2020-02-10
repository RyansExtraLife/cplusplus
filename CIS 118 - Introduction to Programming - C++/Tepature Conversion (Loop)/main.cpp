/*
 Main written by Ryan Patterson
 Online class CIS 118
 */

#include <iostream>

using namespace std;

int main ( )
{
    int tempature;              // values to determine temperature
    int centigrade;             // temperature as degrees celsius
    int fahrenheit;             // temperature as degrees fahrenheit
    int selection;              // first selection F or C.
    int selectiontwo = 'Y';     // second selection rerun or contiune.
    
    while (selectiontwo == 'Y')
    {
        // Prompt User
        cout << "What would you like convert? Type in the corrasponding number below." << endl;
        cout <<  " 1.) Convert from Degrees Celsius to Degrees Fahrenheit. " << endl;
        cout <<  " 2.) Convert from Degrees Fahrenheit to Degrees Celsius. " << endl;
        
        // Used to clarify where user needs to submit answer.
        cout <<  " Please enter your selection here:";
        cin >> selection; // Allows user to submit the process he wants to preform.
        
        if (selection == 1){
            // Used this is space out the questions making it easier to read.
            cout << " "  << endl;
            
            // Prompt user for tempature
            cout << "Please insert a tempature to change from degrees celsius to Fahrenheit. " << endl;
            cout << "Enter the tempature in degrees Celsius here:";
            cin >> tempature;
            
            // Converts tempature formula
            fahrenheit = (tempature * 9/5 + 32);
        
            // Used this to space out the questions making it easier for user to read.
            cout << " " << endl;
            
            // result to be displayed
            cout <<"The converted tempature is" << fahrenheit << " degrees Fahrenheit." << endl;
        }
        else if ( selection == 2 ){
            // Used this is space out the questions making it easier to read.
            cout << " " << endl;
            cout << "Please insert a tempature to change from Fahrenheit to degrees Celsius. " << endl;
            cout << "Enter the tempature in degrees Fahrenheit here:";
            
            // Prompt user for tempature
            cin >> tempature;
            
            // Converts tempature formula
            centigrade = ((tempature -32) * 5/9);
            
            // Used this to space out the questions making it easier for user to read.
            cout << " " << endl;
            
            // result to be displayed
            cout << "The converted tempature is " << centigrade << " degrees Celsius. " << endl;
        }
        else {
            //shows when any other value than 1 or 2 is pressed.
            cout << "Please make a selection within the criteria.";
        }
    }
    return 0;
    // end of program
}
