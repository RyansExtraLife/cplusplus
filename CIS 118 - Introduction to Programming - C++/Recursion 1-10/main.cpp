/*
 Main written by Ryan Patterson
 Online class CIS 118
*/

#include <iostream>
using namespace std;

int n = 1;
int y = 0;

int main(){
    for (int x=1; x <= 10; x++){
        y=x+y;
        cout << y;
    }
    return 0;
}
