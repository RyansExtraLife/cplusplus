/*
 Main written by Ryan Patterson
 Online class CIS 118
*/

#include <iostream>

using namespace std;

int main ( ) {
    
    int i = 0;
    for( i = 1; i <= 5; i++ ){
        if ( i==2) cout << "     ";                 // if on the second pass add five spaces
        if ( i==3) cout << "          ";            // if on the third pass add ten spaces
        if ( i==4) cout << "               ";       // if on the forth pass add fifteen spaces
        if ( i==5) cout << "                    ";  // if on the fith pass add twenty spaces
        cout << "*  o  " << endl;
        if ( i==2) cout << "     ";                 // if on the second pass add five spaces
        if ( i==3) cout << "          ";            // if on the third pass add ten spaces
        if ( i==4) cout << "               ";       // if on the forth pass add fifteen spaces
        if ( i==5) cout << "                    ";  // if on the fith pass add twenty spaces
        cout << "* /|- " << endl;
        if ( i==2) cout << "     ";                 // if on the second pass add five spaces
        if ( i==3) cout << "          ";            // if on the third pass add ten spaces
        if ( i==4) cout << "               ";       // if on the forth pass add fifteen spaces
        if ( i==5) cout << "                    ";  // if on the fith pass add twenty spaces
        cout << "* / | " << endl;
        if ( i==2) cout << "     ";                 // if on the second pass add five spaces
        if ( i==3) cout << "          ";            // if on the third pass add ten spaces
        if ( i==4) cout << "               ";       // if on the forth pass add fifteen spaces
        if ( i==5) cout << "                    ";  // if on the fith pass add twenty spaces
        cout << "******" << endl;
    }
    return 0;
}
