/*
 Main written by Ryan Patterson
 Online class CIS 118
*/

#include <iostream>
using namespace std;

// All the arrays are seperate for each of the functions to make sure no issues are caused within each case.
string firstNameArrayOne[7] = {"Jim","Tuyet","Ann","Roberto","Crystal","Vallah","Mathilda"};
string firstNameArrayTwo[7] = {"Jim","Tuyet","Ann","Roberto","Crystal","Vallah","Mathilda"};
string firstNameArrayThree[7] = {"Jim","Tuyet","Ann","Roberto","Crystal","Vallah","Mathilda"};
string inputedName;

string removeName;

int main ()
{
    // Function One, Passing a name into an array.
    cout << "Please enter a name to compare to the array: ";
    cin >> inputedName;
    
    for (int i = 7; i >= 0; i--){
        if('firstNameArrayOne' == 'imputedName'){
            cout << "The name  was fond in the Array!";
        }else{
            cout << "Name not found" <<endl;
        }
    }
    
    // Function Two, Print all of the names in the array.
    for (int i = 7; i >= 0; i--){
        cout << firstNameArrayTwo[i] << endl;
    }
    
    // Function Three, Erase a Name and then print it out.
    cout << "Please enter one of the following names to be removed from the array: Jim , Tuyet, Ann, Roberto, Crystal, Vallah, Mathilda : " << endl;
    cin >> removeName;
    
    for (int i = 7; i >= 0; i--){
        if('firstNameArrayThree' == 'removeName'){
            firstNameArrayThree[i] = " ";
        }
    }
    
    for (int i = 7; i >= 0; i--){
        cout << firstNameArrayThree[i] << endl;
    }
    return 0;
} // End program. 
