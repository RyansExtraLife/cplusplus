/*
 Main written by Ryan Patterson
 Class CIS 278
*/

#ifndef Assignment_15_with_EC___53_h
#define Assignment_15_with_EC___53_h

template < typename M >
M minamum( M number1, M number2, M number3 ){
    M minamumValue = number1;

    if (number2 < minamumValue){minamumValue = number2;}
    if (number3 < minamumValue){minamumValue = number3;}
    return minamumValue;
}  
#endif
