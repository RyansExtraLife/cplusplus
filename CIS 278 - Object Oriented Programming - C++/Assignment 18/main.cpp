/*
 Main written by Ryan Patterson
 Class CIS 278
*/

#include <iostream>
#include <iomanip>
#include <sstream>
#include <string>
#include "Rational.h"

using namespace std;

Rational::Rational(int numer, int denom){
    numerator = numer;
    denominator = denom;
}


string toString(){
    ostringstream oss;
    oss << "("  << "," << ")";
    return oss.str();
}

void Rational::Addition(Rational r){
    numerator = numerator + r.numerator;
    denominator = denominator + r.denominator;
    Reducer();
}

void Rational::Subtraction(Rational r){
    numerator = numerator - r.numerator;
    denominator = denominator - r.denominator;
    Reducer();
}

void Rational::Mutiplication(Rational r){
    numerator = numerator * r.numerator;
    denominator = denominator * r.denominator;
    Reducer();
}

void Rational::Division(Rational r){
    numerator = numerator * r.denominator;
    denominator = denominator * r.numerator;
    Reducer();
}

void Rational::printRational(){
    cout << numerator << "/" << denominator;
}

void Rational::printRationalAsDouble(){
    cout << numerator / static_cast<float>( denominator );
}

void Rational::Reducer(){
    int largest;
    int gcd = 0;
    
    largest = numerator > denominator ? numerator : denominator;
    for( int loop = 2; loop <= largest; loop++ ){
        if ( numerator % loop == 0 && denominator % loop == 0 ){
            gcd = loop;
        }
    }
    if(gcd != 0){
        numerator /= gcd;
        denominator /= gcd;
    }
}


int main(){
    Rational c( 2, 6 ), d( 7, 8 ), x; // creates three rational objects
    c.printRational(); // prints rational object c
    cout << " + ";
    d.printRational(); // prints rational object d
    x = c.Addition( d );
    return 0;
}

