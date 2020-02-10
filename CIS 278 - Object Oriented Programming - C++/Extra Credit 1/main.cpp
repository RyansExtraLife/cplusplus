/*
 Main written by Ryan Patterson
 Class CIS 278
*/

#include <iostream>

double power(int x, int exponent){
    if (exponent == 0){return 1;}
    if (exponent == 1 || exponent == -1){return x;}
    if (exponent < -1 ){ return x / power(x, exponent+1);}
    return x * power(x, exponent-1);
}

int main(){
    int answer;
    answer = power(5,-3);
    std::cout << answer << std:: endl;
}

