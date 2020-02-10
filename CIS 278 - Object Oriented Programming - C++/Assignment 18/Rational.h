/*
 Main written by Ryan Patterson
 Class CIS 278
*/

#ifndef Rational_h
#define Rational_h

using namespace std;

class Rational{
    private:
    int numerator;
    int denominator;
    
    public:
    Rational(int = 0, int = 0); // Constructor
    
    
    void Addition(Rational r);
    void Subtraction(Rational r);
    void Division(Rational r);
    void Mutiplication(Rational r);
    
    void printRational();
    void printRationalAsDouble();
    void Reducer();
};

#endif
