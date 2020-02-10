/*
 Main written by Ryan Patterson
 Online class CIS 118
*/

#include <iostream>
#include <string>

using namespace std;

string inputname[10];

int main()
{
    for ( int i = 0; i<=9; i++){
        cout << "Name" << i+1 << ": ";
        cin >> inputname [i];
    }
    
    cout << "       " << endl; 
    cout << "Entered Names" <<endl;
    cout << "       " <<endl;
    
    for (int j=0;j<=9;j++){
        cout <<inputname [j] <<endl;
    }
    
    return 0;
}
