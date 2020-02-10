/*
 Main written by Ryan Patterson
 Online class CIS 118
 */

#include <iostream>
#include <cmath>

using namespace std;

int main ()
{
    int PI=3.14;
    int calcDiameter;
    int calcCircumference;
    int calcArea;
    int radius =1.03;
    
    cout << "The raidus used for the calculations is " << radius << endl;
    cout << "    " << endl;
    
    calcDiameter = 2 * radius;
    cout << "The Diameter of the Ciricle is: " << calcDiameter << endl;
    cout << "    " << endl;
    
    calcCircumference= 2 * PI * radius;
    cout << "The Circumference of the Circle is: " << calcCircumference << endl;
    cout << "    " << endl;
    
    calcArea =PI* (radius*radius);
    cout << "The Area of the Ciricle is: :" << calcArea << endl;
    cout << "    " << endl;
    return 0;
}

