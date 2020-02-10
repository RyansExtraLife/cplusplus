/*
 Main written by Ryan Patterson
 Class CIS 278
*/

#include <iostream>


template < typename m >
m maximum( m value1, m value2, m value3 ){
    R maximumValue = value1;
    if (value2 > maximumValue){maximumValue = value2;}
    if ( value3 > maximumValue){maximumValue = value3;}
    return maximumValue;
}

int main(){
    return 0;
}

