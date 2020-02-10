/*
 Main written by Ryan Patterson
 Class CIS 278
*/

#include <iostream>

class ConsoleInput{
    private:
        
    public:
   
};



class FortuneTeller{ 
    private:

    public:
    void tellFortune(){
        using namespace std;
            
        cout << " Hello, I am Gretta the amazing Fortune Teller." << endl;
        cout << " I will answer three questions for you!" << endl;
            
        int loopCount =0;
        int randomResponce = rand()%3;

        while(loopCount < 3){
            if (randomResponce == 0){
                cout << " My sorces tell me....YES!" << endl;
            }
            else if(randomResponce == 1){
                cout << "My sorces tell me....NO!" << endl;
            }
            else if(randomResponce == 2){
                cout << "My sorces are hazy... ask another questions." << endl;
            }
            loopCount ++;
        }
    }
};

int main (){
    FortuneTeller tellFortuneAssignment;
    tellFortuneAssignment.tellFortune();
};