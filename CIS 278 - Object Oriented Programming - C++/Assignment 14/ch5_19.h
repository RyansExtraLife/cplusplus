/*
 Main written by Ryan Patterson
 Class CIS 278
*/

#ifndef Assignment_14_ch5_19_h
#define Assignment_14_ch5_19_h

#include <iostream>

class Pi{
    public:
    void calculatingPi(){
        using namespace std;
        double pi =4;
        cout << pi <<endl;
        cout << " <---------- CALCULATING PIE --------->" << endl << endl; 
        for (int multiplyer = 2; multiplyer <= 1000;){   
            pi -= (4.0/((2 * multiplyer) - 1));
            cout << pi << endl;
            multiplyer++;
            
            pi += (4.0/((2 * multiplyer) - 1));
            cout<< pi << endl;
            multiplyer++;
        }
    }
};

#endif
