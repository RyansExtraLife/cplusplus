/*
 Main written by Ryan Patterson
 Class CIS 278
*/

#include <iostream>
using namespace std;

class MyMath{
  
    public:
    int fact_iter(int p){
        int factorial = 1;
		for(int i = 1; i <= p; i++){
			factorial *= i;
		}
        return factorial;
    }

    int  fact_rec(int q){
        int r;
        if(q <= 1) {return 1;}
        r = q * fact_iter(q - 1);
        return r;
    }

    int div_mod(int s, int t, int u, int v){
   
    }

    int gcd(int w, int x ){
        if (w > x){
            if (w % x == 0){
                return x;
            }else{
                x = w % x;
                gcd(w, x);
            }
        }else{
            if (x % w == 0){
                return w;
            }else{
                w = x % w;
                gcd(w, x);
            }
        }
        return 0;
    }

    int cube(int y){   
        cout << " The cube of interger: " << y << " is ";
        return y * y * y;
    }
    
    double cube(double z){ 
        cout << " The cube of interger: " << z << " is ";
        return z * z * z;
    }
};

int main (){
    return 0;
}