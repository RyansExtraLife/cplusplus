#include <iostream>                                                                                     //Basic input output include
#include <stdlib.h>                                                                                     //Used for rand in "randString"
#include <thread>                                                                                       //Used for pause in code during multiple rolls.
#include <time.h>                                                                                       //Used for rand in "randString"
#include "eightSidedDie.h"
#include <thread>

using namespace std;


int main(){
    srand (static_cast<unsigned>(time(static_cast<time_t *>(0))));
    
    
    EightSidedDie aDie1;                                                                                //Creates Object from class EightSidedDie called aDie1.
    EightSidedDie::EightSidedDie();                                                                     //Call constructor Method from Class EightSidedDie.
    
    int diceRollOne =0;                                                                                 //User selected value for the amount of dice rolls.
    cout << "How many times would you like to roll the dice?" << endl;                                  //Prompts user for value.
    cout << "The requested amount for this assignment is 6." << endl;                                   //Creates a while loop that uses the roll method equal to
    cin >> diceRollOne;                                                                                 //The amount of time the user selected.
    cout << endl;
    int rollLoopOne =0;
    while (rollLoopOne < diceRollOne){
        aDie1.roll();
        cout << "The dice rolled accross the table and landed on " << aDie1.getCurrent() << "." << endl;
        std::this_thread::sleep_for(std::chrono::milliseconds(300));                                      //Pause for dramatic roll. =D
        rollLoopOne ++;
    }
    
    cout << endl << endl << "How many times has each dice facing appeared: " << endl << endl;
    cout << aDie1;

    cout << "Die 1 has been reset to 0" << endl << endl;
    aDie1.reset();
    cout << " " << endl;
    
    
    int diceRollTwo =0;
    cout << "How many times would you like to roll the dice?" << endl;
    cout << "The requested amount for the second roll in this assignment is 10." << endl;
    cin >> diceRollTwo;
    
    int rollLoopTwo =0;
    while (rollLoopTwo <= diceRollTwo){
        aDie1.roll();
        cout << "The dice rolled accross the table and landed on " << aDie1.getCurrent() << "." << endl;
        std::this_thread::sleep_for(std::chrono::milliseconds(300));

        rollLoopTwo ++;
    }
    cout << endl;
    
    for(int timesRolled =1; timesRolled < DiceSides; timesRolled ++ ){
        cout << "The " << timesRolled << " has been rolled " << aDie1.getSideCount(timesRolled)<< " times." << endl;
    }
    cout << endl << endl;
    
    EightSidedDie aDie2;
    aDie2.CopyDie(aDie1);
    
    cout << "Checking to see if the array values are queal" << endl; 
    if (aDie2 == aDie1){
        cout << "The two objects arrays have the same values." << endl;
    }else{
        cout << "The two objects arrays have differnt values." << endl;
    }
    
    
    int diceRollThree =0;
    cout << "How many times would you like to roll the dice?" << endl;
    cout << "The requested amount for the third roll in this assignment is 10." << endl;
    cin >> diceRollThree;
    
    int rollLoopThree =0;
    while (rollLoopThree <= diceRollThree){
        aDie2.roll();
        cout << "The dice rolled accross the table and landed on " << aDie1.getCurrent() << "." << endl;
        std::this_thread::sleep_for(std::chrono::milliseconds(300));
        
        rollLoopThree ++;
    }
    cout << endl <<endl;
    
    
    if (aDie2 == aDie1){
        cout << "The two objects arrays have the same values." << endl;
    }else{
        cout << "The two objects arrays have differnt values." << endl;
    }
    
    EightSidedDie aDie3;
    aDie3.addAll(aDie1, aDie2);
    
    cout << aDie3;
}

