/*
 Main written by Ryan Patterson
 Class CIS 278
*/

#include <iostream>

class Pi{

    public:
    void calculatingPi(){
        using namespace std; 
        double pi =4;
        cout << pi <<endl;
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
int main (){
    Pi Q15_19;
    Q15_19.calculatingPi();
    
    return 0;
};