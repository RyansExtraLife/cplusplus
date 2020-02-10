/*
 Main written by Ryan Patterson
 Class CIS 278
*/

#include <iostream>
#include <sstream>

using namespace std;

class A8_1{
    public:
    void realFavoriteNumber(){
        cout << "Please enter your favorite number \n";
        int userFavoriteNumber;
        
        cin >> userFavoriteNumber;
        int computerFavoriteNumber;
        computerFavoriteNumber = userFavoriteNumber+1;
        cout << "Well that number is ok, but the computers favorite number is " << computerFavoriteNumber << ", and it is wayyyy cooler.\n" <<endl;
    };
};

class A8_2{
    public:
    void myComputerIsSick(){
        cout << "Please enter your current body tempature: \n";
        double userTemp;
        cin >> userTemp;
        
        double computerTemp;
        computerTemp = userTemp+3.5;
        cout << "The computer has a fever with a tempature of  " << computerTemp << ",oh boy, thats to hot.\n";
    };
};

class A8_3{
    public:
    void bodyMesurements(){
        double bodyWeight;
        double waistCircumfrence;
        
        cout << "We are going to ask for some information to judge some statistics on your body's health\n" <<endl;
        
        cout << "First, can you please enter your body weight in pounds :";
        cin >> bodyWeight;
        
        cout << "Ok so your weight is " << bodyWeight << " , now could you please enter the circumfrence of your waist, mesured at your belly button";
        cin >> waistCircumfrence;
        
        double equationOne;
        double equationTwo;
        
        equationOne = bodyWeight*1.082+94.42;
        equationTwo = waistCircumfrence*4.15;
        
        double leanBodyWeight;
       
         
        leanBodyWeight = bodyWeight -waistCircumfrence;
        cout << "Your lean body weight is" << leanBodyWeight << endl;
        
        double bodyFat;
        
        bodyFat = bodyWeight-leanBodyWeight;
        cout << "Your lean body fat is " << bodyFat << endl;
        
        double percentBodyfat;
        
        percentBodyfat = bodyFat/bodyWeight*100;
        
        cout << "Your total percent body fat is " << percentBodyfat << "%";
    }
    
};

int main ()

{
    A8_1 favNum;
    favNum.realFavoriteNumber();
    
    A8_2 compTemp;
    compTemp.myComputerIsSick();
    
    A8_3 hugoRivera;
    hugoRivera.bodyMesurements();
    
    return 0;
}


/*
 Please enter your favorite number
 10
 Well that number is ok, but the computers favorite number is 11, and it is wayyyy cooler.

 Please enter your current body tempature:
 90.2
 The computer has a fever with a tempature of  93.7,oh boy, thats to hot.
 
 We are going to ask for some information to judge some statistics on your body's health
 
 First, can you please enter your body weight in pounds :200
 Ok so your weight is 200 , now could you please enter the circumfrence of your waist, mesured at your belly button32
 Your lean body weight is168
 Your lean body fat is 32
 Your total percent body fat is 16%
*/
