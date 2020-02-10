/*
 Main written by Ryan Patterson
 Class CIS 278
*/

#ifndef Assignment_15_MyMath_h
#define Assignment_15_MyMath_h

int fact_iter(int p){
    int factorial = 1;
	for(int i = 1; i <= p; i++){
		factorial *= i;
	}
    return factorial;
}
    
int  fact_rec(int q){
    int r;
    if(q <= 1){return 1;}
    r = q * fact_iter(q - 1);
    return r;
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
    return y * y * y;
}
    
double cube(double z){
    return z * z * z;
}
    
#endif