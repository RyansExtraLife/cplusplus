//
//  eightSidedDie.h
//  Programming Project 1
//
//  Created by Ryan Michael on 1/20/14.
//  Copyright (c) 2014 Ryan Michael. All rights reserved.
//

#ifndef Programming_Project_1_eightSidedDie_h
#define Programming_Project_1_eightSidedDie_h

#include <iostream>
#include <stdlib.h>                                                                         //Used for SudoRandom dice roll results in the roll method.
#include <time.h>                                                                           //Used for SudoRandom dice roll results in the roll method.
#include <unistd.h>
using namespace std;

const int DiceSides = 9;                                                                    //Creates a varaible that allows you to control the amount of sides on a die.
                                                                                            //Increasing this vairable, changes the entire program.
                                                                                            //This number must be one value higher then the number of sides you want.

class EightSidedDie                                                                         //Class entiled "EightSidedDie"
{
private:
    
    int eightSidedDieArray[DiceSides];                                                      //Creates an array that is equal to the variable DiceSides.
                                                                                            //The number should always be 1 higher then the number of sides
                                                                                            //the user needs, 0 will be trash variable to make coding easier.
    
    int currentDiceFacing;                                                                  //Variable that stores the current facing of the dice.
    
    int numberOfRolls;                                                                      //Variable that stores the amount of time a dice has been rolled.
    
public:
    
    friend ostream & operator<<(ostream& out, const EightSidedDie& aDie);
    
    EightSidedDie()                                                                         //Constructor that initilzes all private variables to 0.
    {
        for (int initializeArray = 0;initializeArray < DiceSides; initializeArray ++)       // for loop in the construtor that initalzies all of the dice faces
        {                                                                                   // to 0. This loop will allow you to increase the amount of dice
            eightSidedDieArray[initializeArray] =0;                                         // faces availbe and still be able to initalize the variables to 0.
        }
        currentDiceFacing =0;                                                               // Sets the current dice facing to 0 because it has not been rolled.
        numberOfRolls =0;                                                                   // Variable that allows user to see how many times the dice has been rolled
    };                                                                                      // This can be used as a tool to verify that the dice has been rolled
                                                                                            // when searching for the largest number.
    
    void CopyDie(EightSidedDie aDiePassedIn)                                       //
    {
        for (int i=1; i < DiceSides; i++)
        {
        eightSidedDieArray[i] = aDiePassedIn.eightSidedDieArray[i];                       // Returns the newly created copy of the die.
        }
        currentDiceFacing = aDiePassedIn.currentDiceFacing;
        numberOfRolls = aDiePassedIn.numberOfRolls;
    }
    
    
    void roll()                                                                             // Method that allows you to roll the "DiceSides"
    {
        int RandVariable = DiceSides -1;                                                    // Variable used to reduce DiceSides by one in order to roll
                                                                                            // with in the parameters of the dice sides that are aviable.
        
        int diceSideRandomizer = rand() % RandVariable +1;                                  // Increase the rand number rolled by one to remove 0 as a possible answer.
        
        if (diceSideRandomizer > 0 && diceSideRandomizer <= RandVariable)                   // if statement that verifys that the dice roll is a valid interger.
        {
        eightSidedDieArray[diceSideRandomizer] = eightSidedDieArray[diceSideRandomizer] +1; // Increase the variable in the array that corresponds the the dice roll by 1.
        currentDiceFacing = diceSideRandomizer;                                             // Sets the currrent dice side facig to the interger that was rolled.
        numberOfRolls = numberOfRolls +1;                                                   // Increase the number of times the dice has been rolled by one.
        }
        else                                                                                // If the rand makes an error and produces a number that is out of bounds
        {                                                                                   // it will simply display an error message.
            cout << "The dice rolled off the table." <<endl;
        }
    }
    int getCurrent()                                                                        // A simple "get" method that returns the value stored in "currentDiceFacing".
    {
        return currentDiceFacing;
    }
    
    int getTimesRolled()
    {
        return numberOfRolls;
    }
    
    int getSideCount (int passedInValue)
    {
        if (passedInValue > 0 && passedInValue <= DiceSides)                                // A if statement used for verifciation if the number is valid.
        {
            return eightSidedDieArray[passedInValue];                                       // Returns the variable
        }else{
            return 0;                                                                       // If the dice is outside of the parameters returns 0. 
        }
    }
    
    bool validCount (int validNumber)
    {
        int maxNumber = DiceSides - 1;                                                      // With the array needing to be one size bigger 1 needs to be removed
                                                                                            // in order for the number to be valid.
        if (validNumber > 0 && validNumber >= maxNumber)                                    // if statement that returns true if the number is within the parameters.
        {
            return true;
        }else{                                                                              // if the number is not within the parameters it will return false. 
            return false;
        }
    }
    
    void addAll(EightSidedDie aDie1PassedIn, EightSidedDie aDie2PassedIn)                   
    {
                                                                                            // Creates aDie3 which will be a combonation of aDie1 and aDie2.
        
        for(int a =1; a < DiceSides; a++)                                                   // A for loop designed to have each varible in the array equal to
                                                                                            // the addition of the the first passed in objects equilivant variable
                                                                                            // and the second. This loops through the number of sides on a die to insure
                                                                                            // that each number is added togheter.
        {
            eightSidedDieArray[a] =  aDie1PassedIn.eightSidedDieArray[a] + aDie1PassedIn.eightSidedDieArray[a];
        }
        
        currentDiceFacing = aDie1PassedIn.currentDiceFacing;                                // Sets the current die facing equal to the first dice that is passed in.
        
                                                                                            // Returns the newly created combonation object with the facing eqaul do aDie1.
    }
    
    int largest()
    {
        int largestArrayValue = eightSidedDieArray[0];                                      //Sets the variable equal to the 0 slot of the array.
        
        for(int a = 1; a < DiceSides; a++)                                                  // for loop that is designed to change the variable "largestArrayValue"
        {                                                                                   // to a higher varibale if the array has one it it as it loops through.
            if(eightSidedDieArray[a] > largestArrayValue)
                largestArrayValue = eightSidedDieArray[a];
        }                                                                                   // After the largest variable has been found, a while loop is created to find
                                                                                            // the first array index with that matching number.
        int b =0;
        while (b == 0)                                                                      // Once the loop finds the variable the loop will break.
        {
            int c=0;
            if (largestArrayValue == eightSidedDieArray[c])                                 // If statement that will break the loop once the variables are equal.
            {
                b = c;
            }
            c++;
        }
        return b;                                                                           // Returns the highest variable in the array.
        
    }
    
    bool operator==(const EightSidedDie& obj)                                               //Creates a == opertor to compare the array values of two eight sided dice.
    {
        for (int i = 0; i < DiceSides; i++)                                                 //For loop that cycles each array through the dice facings.
        {
            
           if (eightSidedDieArray[i] != obj.eightSidedDieArray[i])                          //If at anytime the dice facings do not mach the state returns false.
           {
               return false;
           }
        }
        return true;                                                                        //if the loop completes and all of the values are equal returns true.
    }
    
    void reset()
    {
        for (int initializeArray = 0;initializeArray <= DiceSides; initializeArray ++)      // for loop in the reset meothd that resets all of the dice rolls
        {                                                                                   // to 0. This loop will allow you to increase the amount of dice
            eightSidedDieArray[initializeArray] =0;                                         // faces availbe and still be able to initalize the variables to 0.
        }
        int zero =0;
        currentDiceFacing = zero;                                                           // Resets the current dice facing to 0;
        numberOfRolls = zero ;                                                              // Resets the current roll count to 0;
    }
};


ostream& operator<<(ostream& out, const EightSidedDie& aDie)
{
    for (int i =1; i < DiceSides; i++)
    {
        out << "The " << i << " has been rolled " << aDie.eightSidedDieArray[i] << " times." << endl;
    }
    return out;
}




#endif
