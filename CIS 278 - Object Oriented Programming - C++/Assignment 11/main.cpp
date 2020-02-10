/*
 Main written by Ryan Patterson
 Class CIS 278
*/

#include <iostream>
using namespace std;


 /*
  2.25 (Multiples) Write a program that reads in two integers and determines and prints if the first is a multiple of the second. 
 */

class C2_25{
    public:
    void multipleOfSecond(){
        cout << "This progra will tell you if the first number enterd is a multiple of the second number you enter.";
        
        cout << " Please enter your first number:\n";
        int inputNumberOne;
        cin >> inputNumberOne;
    
        cout << "Please enter the second number:\n";
        int inputNumberTwo;
        cin >> inputNumberTwo;
        
        if ( inputNumberOne % inputNumberTwo == 0 ){
             cout <<  "The number " << inputNumberOne << " is a multiple of " << inputNumberTwo << endl <<endl;
        }else{  
            cout << " The number " << inputNumberOne << " is not a multiple of " << inputNumberTwo << endl << endl; 
        }
    }
};

 /*
  2.27 (Integer Equivalent of a Character) Here is a peek ahead. In this chapter you learned about integers and the type int. C++ can also represent uppercase letters, lowercase letters and a consider- able variety of special symbols. C++ uses small integers internally to represent each different charac- ter. The set of characters a computer uses and the corresponding integer representations for those characters are called that computer’s character set. You can print a character by enclosing that char- acter in single quotes, as with
      cout << 'A'; // print an uppercase A
     
  You can print the integer equivalent of a character using static_cast as follows:
  cout << static_cast< int >( 'A' ); // print 'A' as an integer
   
  This is called a cast operation (we formally introduce casts in Chapter 4). When the preceding statement executes, it prints the value 65 (on systems that use the ASCII character set). Write a program that prints the integer equivalent of a character typed at the keyboard. Store the input in a variable of type char. Test your program several times using uppercase letters, lowercase letters, dig- its and special characters (like $).
 
 */

class C2_27{
    public:
    void intergerValue(){
        cout << "This program allows the user to find out what number is tied to a letter or symbol in ASCII\n";
        cout << "This program will repeat five times and then end."<< endl <<endl;
        
        cout << "Please enter the first letter or symbol: ";
        char firstLetterOrSymbol;
        cin >> firstLetterOrSymbol;
        cout << static_cast< int >( firstLetterOrSymbol ) << endl;
        
        cout << "Please enter the second letter or symbol: ";
        char secondLetterOrSymbol;
        cin >> secondLetterOrSymbol;
        cout << static_cast< int >( secondLetterOrSymbol ) << endl;
        
        cout << "Please enter the third letter or symbol: ";
        char thirdLetterOrSymbol;
        cin >> thirdLetterOrSymbol;
        cout << static_cast< int >( thirdLetterOrSymbol ) << endl;
        
        cout << "Please enter the fourth letter or symbol: ";
        char fourthLetterOrSymbol;
        cin >> fourthLetterOrSymbol;
        cout << static_cast< int >( fourthLetterOrSymbol ) << endl;
        
        cout << "Please enter the fifth letter or symbol: ";
        char fifthLetterOrSymbol;
        cin >> fifthLetterOrSymbol;
        cout << static_cast< int >( fifthLetterOrSymbol ) << endl <<endl;
    }
};

 /*
 2.28 (Digits of an Integer) Write a program that inputs a five-digit integer, separates the integer into its digits and prints them separated by three spaces each. [Hint: Use the integer division and modulus operators.]
 */


class C2_28 {
    public:
    void fiveDigitIntergerBreakdown(){
        cout << "Please enter a five digit number, this number will be broken aprat and displayed with three seperate spaces between them: \n";
        int userInputedNumber;
        cin >> userInputedNumber;
        
        int digitOne;
        digitOne = userInputedNumber % 10;
        
        int digitTwo;
        digitTwo = userInputedNumber / 10 % 10;
        
        int digitThree;
        digitThree =  userInputedNumber / 100 % 10;
        
        int digitFour;
        digitFour =  userInputedNumber/ 1000 % 10;
        
        int digitFive;
        digitFive =  userInputedNumber / 10000 % 10;
        
        cout << "Here is your number:   " << digitFive << "   " << digitFour << "   " << digitThree << "   " << digitTwo << "   " << digitOne << endl << endl << endl;  
    }    
};




 /*
 2.29 (Table) Using the techniques of this chapter, write a program that calculates the squares and cubes of the integers from 0 to 10. Use tabs to print the following neatly formatted table of values:
 */

class C2_29{
    public:
    void intergerSquareCube(){
        // The following number where set as variables so that if you needed to change any you would not have to change every number. 
        int numberOne;
        numberOne = 1;
        int squareOfOne;
        squareOfOne = numberOne * numberOne;
        int cubeOfOne;
        cubeOfOne = numberOne * numberOne * numberOne;
        
        int numberTwo;
        numberTwo = 2;
        int squareOfTwo;
        squareOfTwo = numberTwo * numberTwo;
        int cubeOfTwo;
        cubeOfTwo = numberTwo * numberTwo * numberTwo;
        
        int numberThree;
        numberThree = 3;
        int squareOfThree;
        squareOfThree = numberThree * numberThree;
        int cubeOfThree;
        cubeOfThree = numberThree * numberThree; 
        
        int numberFour;
        numberFour = 4;
        int squareOfFour;
        squareOfFour = numberFour * numberFour;
        int cubeOfFour;
        cubeOfFour = numberFour * numberFour * numberFour;
        
        int numberFive;
        numberFive = 5;
        int squareOfFive;
        squareOfFive = numberFive * numberFive * numberFive;
        int cubeOfFive;
        cubeOfFive = numberFive * numberFive * numberFive;
        
        int numberSix;
        numberSix = 6;
        int squareOfSix;
        squareOfSix = numberSix *numberSix; 
        int cubeOfSix;
        cubeOfSix = numberSix * numberSix *numberSix;
        
        int numberSeven;
        numberSeven = 7;
        int squareOfSeven;
        squareOfSeven = numberSeven * numberSeven;
        int cubeOfSeven;
        cubeOfSeven = numberSeven * numberSeven; 
        
        int numberEight;
        numberEight = 8;
        int squareOfEight;
        squareOfEight = numberEight * numberEight;
        int cubeOfEight;
        cubeOfEight = numberEight * numberEight * numberEight;
        
        int numberNine;
        numberNine = 9;
        int squareOfNine;
        squareOfNine = numberNine * numberNine;
        int cubeOfNine;
        cubeOfNine = numberNine * numberNine * numberNine;
        
        int numberTen;
        numberTen = 10;
        int squareOfTen;
        squareOfTen = numberTen * numberTen;
        int cubeOfTen;
        cubeOfTen = numberTen * numberTen * numberTen;
        
        
        cout << "   Interger       Square      Cube "<<endl;    
        cout << "   "<< numberOne   <<"               " << squareOfOne   <<"            "<< cubeOfOne     <<endl;
        cout << "   "<< numberTwo   <<"               " << squareOfTwo   <<"            "<< cubeOfTwo     <<endl;
        cout << "   "<< numberThree <<"               " << squareOfThree <<"            "<< cubeOfThree   <<endl;
        cout << "   "<< numberFour  <<"               " << squareOfFour  <<"           "<< cubeOfFour    <<endl;
        cout << "   "<< numberFive  <<"               " << squareOfFive  <<"          "<< cubeOfFive    <<endl;
        cout << "   "<< numberSix   <<"               " << squareOfSix   <<"           "<< cubeOfSix     <<endl;
        cout << "   "<< numberSeven <<"               " << squareOfSeven <<"           "<< cubeOfSeven   <<endl;
        cout << "   "<< numberEight <<"               " << squareOfEight <<"           "<< cubeOfEight   <<endl;
        cout << "   "<< numberNine  <<"               " << squareOfNine  <<"           "<< cubeOfNine    <<endl;
        cout << "   "<< numberTen   <<"              " << squareOfTen   <<"          "<< cubeOfTen     <<endl << endl << endl;
    }
};



 /*
  2.31 (Car-Pool Savings Calculator) Research several car-pooling websites. Create an application that calculates your daily driving cost, so that you can estimate how much money could be saved by car pooling, which also has other advantages such as reducing carbon emissions and reducing traffic congestion. The application should input the following information and display the user’s cost per day of driving to work:
  a) Total miles driven per day.
  b) Costpergallonofgasoline.
  c) Average miles per gallon.
  d) Parkingfeesperday.
  e) Tolls per day.
 
 */

class C2_31{
    public:
    void carPool(){
        cout << "The following program will allow the user to first determine how much they spend a day to commute to work.\n"<< endl;
        cout << "This program will first ask you a few question to determine the basic information\n" << endl;
        
        cout << "Please enter the total number of miles you drive per day (Round Trip):\n";
        double totalMilesPerDay;
        cin >> totalMilesPerDay;
        
        cout << "Please enter the current price of Gasoline per gallon: \n";
        double costPerGallonOfGas;
        cin >> costPerGallonOfGas;
        
        cout << "Please enter the current miles per gallong your car gets per mile: \n";
        double averageMilesPerGallon;
        cin >> averageMilesPerGallon;
        
        double costSavedinGasTotal;        
        costSavedinGasTotal = totalMilesPerDay * costPerGallonOfGas / averageMilesPerGallon;
        
        cout << "Please enter the amount of money you spend on parking fees per day: \n";
        double parkingFeesPerDay;
        cin >> parkingFeesPerDay;
        
        cout << "Please enter the amount of money you spend on road tolls per day: \n ";
        double tollsPerDay;
        cin >> tollsPerDay;
        
        double totalSavingPerDay;
        totalSavingPerDay = costSavedinGasTotal + parkingFeesPerDay +tollsPerDay;
        
        cout << "The total amount of money that you spend on community to work is " << totalSavingPerDay << " dollars per day";
    }
};
 
int main (){
    C2_25 questionOne;
    questionOne.multipleOfSecond();
    
    C2_27 questionTwo;
    questionTwo.intergerValue();
    
    C2_28 questionThree;
    questionThree.fiveDigitIntergerBreakdown();
    
    C2_29 questionFour;
    questionFour.intergerSquareCube();
    
    C2_31 questionFive;
    questionFive.carPool();

    return 0;
}

/*
 
QUESTION 1
 
 IF A MULTIPLE
 This progra will tell you if the first number enterd is a multiple of the second number you enter. Please enter your first number:
 25
 Please enter the second number:
 5
 The number 25 is a multiple of 5
 
 IF NOT A MULTIPLE

 This progra will tell you if the first number enterd is a multiple of the second number you enter. Please enter your first number:
 45
 Please enter the second number:
 7
 The number 45 is not a multiple of 7
 
QUESTION 2

 This program allows the user to find out what number is tied to a letter or symbol in ASCII
 This program will repeat five times and then end.
 
 Please enter the first letter or symbol: f
 102
 Please enter the second letter or symbol: F
 70
 Please enter the third letter or symbol: "
 34
 Please enter the fourth letter or symbol: e
 101
 Please enter the fifth letter or symbol: L
 76

QUESTION 3
 TEST 1
 Please enter a five digit number, this number will be broken aprat and displayed with three seperate spaces between them: 45653
 Here is your number:   4   5   6   5   3
 
 TEST 2
 Please enter a five digit number, this number will be broken aprat and displayed with three seperate spaces between them: 53829
 Here is your number:   5   3   8   2   9
 
 TEST 3
 Please enter a five digit number, this number will be broken aprat and displayed with three seperate spaces between them: 63823
 Here is your number:   6   3   8   2   3

QUESTION 4

 Interger       Square      Cube
 1               1            1
 2               4            8
 3               9            9
 4               16           64
 5               125          125
 6               36           216
 7               49           49
 8               64           512
 9               81           729
 10              100          1000
 
 
 

QUESTION 5
 The following program will allow the user to first determine how much they spend a day to commute to work.
 
 This program will first ask you a few question to determine the basic information
 
 Please enter the total number of miles you drive per day (Round Trip):
 24
 Please enter the current price of Gasoline per gallon:
 3.49
 Please enter the current miles per gallong your car gets per mile:
 18
 Please enter the amount of money you spend on parking fees per day:
 5
 Please enter the amount of money you spend on road tolls per day:
 5
 The total amount of money that you spend on community to work is 14.6533 dollars per day
*/