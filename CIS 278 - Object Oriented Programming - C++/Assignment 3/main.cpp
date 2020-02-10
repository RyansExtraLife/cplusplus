/*
 Main written by Ryan Patterson
 Class CIS 278
*/

#include <iostream>
using namespace std;

class SuperClass{
    private:
    int dataOne;
    int dataTwo;
    int dataThree;
    
    public:
    SuperClass(int dataOne, int dataTwo, int DataThree){}
};

class SubClass : SuperClass {
    private:
    int dataFour;
    int dataFive;
    
    public:
    SubClass(int dataOne, int dataTwo, int dataThree, int dataFour, int dataFive) : SuperClass (dataOne, dataTwo, dataThree){} 
};

int main{};