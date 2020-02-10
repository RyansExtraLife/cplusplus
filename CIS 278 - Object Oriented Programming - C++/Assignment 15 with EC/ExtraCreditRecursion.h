/*
 Main written by Ryan Patterson
 Class CIS 278
*/

#ifndef Assignment_15_factorial_extra_credit_h
#define Assignment_15_factorial_extra_credit_h

int recurstionaddition (long double i, long double j){
        if (j==0){return i;}
        return recurstionaddition (i + .000000000001, j - .00000000001);
}

#endif