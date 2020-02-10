/*
 Main written by Ryan Patterson
 Class CIS 278
*/

#include <ctime> 
#include <iostream>
#include <cstdlib>

using namespace std;

class ConsoleInput{
    public:
    string getString(string prompt){
        cout << prompt;
        string line;
        getline(cin, line);
        return line;
    }
};

class  FortuneTeller{
    public:
    void tellFortune(){
        ConsoleInput kb;
        cout <<"I am Gretta the greatest Gypsy Queen, ask me any yes no question\n"
             << "and I will divine the answer. Be prepared to know your future. \n";
        int loopCount =0;
        while (loopCount<3){
            string line =kb.getString("\n Enter your yes or no question (Will i be rich):");
            int randomResponce = rand()%3;                       
            if (randomResponce ==0){cout << "Well, probably not. ";}
            if (randomResponce ==1){cout << "Ah, possiblynot. \n";}
            if (randomResponce ==2){cout << "Hmmm, what is your real question?\n;";}
            loopCount ++;
        }
    }
};

int main(){
    srand(time(0));
    FortuneTeller FortuneTellerRun;
    FortuneTellerRun.tellFortune();
    return 0;
}

