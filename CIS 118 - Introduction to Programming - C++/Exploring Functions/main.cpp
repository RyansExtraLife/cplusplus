/*
 Main written by Ryan Patterson
 Online class CIS 118
*/

#include <iostream>
#include <math.h>
#include <cmath>

using namespace std;

int squareInteger=0;
int w=6; 
double x = 6.9;
float y = 9.1;
float z =9.1;
float squarefloat =0;

int main () {
    // A sraight up interger equasion, w times w is the value that is exported to v.
    squareInteger=w * w;
    // output squareInterger.
    cout << squareInteger << endl;
    
    // Using the sqrt command should square root the item but it does not for some reason
    // it does not, I have done extensive research on the internet and my code seems to
    // match up with everything. I cant figure out the issue. I have used multiple
    // #includes and sqrt does not seem to become a command.
    double sqrt(double x);
    cout << x << endl;

    // Using float to square the equasion.
    squarefloat = y * z;
    cin >> squarefloat;
    // output of squarefloat.
    cout << squarefloat << endl;
    
    
}
