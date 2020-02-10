/*
 Main written by Ryan Patterson
 Online class CIS 118
*/

#include <iostream>
using namespace std;

string forwardOrderNames [10] ={"Fred","Tuyet","Annie","Moe","Ria","Luke","Jim","May","Rex","Oma" };
string reverseOrderNames [10];

int main ( ){
    //This will raise the value of the reverse order array each time.
    for (int g=0;g<=9;g++){
        // This will raise the value of the forward order array each time.
        for (int h=0;h<=9;h++){
            //This copies the value of "g" to "h" array
            reverseOrderNames[g] = forwardOrderNames[h];
        }
    }
    
    // This prints the list of Forward Order Names
    for (int g=0;g<=9;g++) {
        cout << forwardOrderNames [g] <<endl;
    }
    
    cout << "      " <<endl;
    
    // This prints the  list of Reverse Order Names
    for (int h=0;h<=9;h++) {
        cout <<reverseOrderNames [h] <<endl;
    }
}
