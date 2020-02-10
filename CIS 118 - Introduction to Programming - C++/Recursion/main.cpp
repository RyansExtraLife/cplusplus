#include <iostream>
#include <string>

using namespace std;

int additionRecursion (int x){
    if (x==1){
        return 1;
    }else{
        return x + additionRecursion(x-1);
    }
};

int main (){
    cout << additionRecursion(10) << endl;
};
