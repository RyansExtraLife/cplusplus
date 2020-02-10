/*
 Main written by Ryan Patterson
 Class CIS 278
*/

#include <iostream>
#include <sstream>
#include <string>
#include "6_34.h"
#include "6_38.h"
#include "6_53.h"
#include "Mymath.h"
#include "ExtraCreditRecursion.h"

int main(){
    using namespace std;
    int askagain = true;
    char reply;
    while (askagain == true){
        for (int p =1; p <=1; p++){
            int answer =0;
            cout << "***** Hello and welcome to Homework Assignment 15 with Extra Credit *****" << endl << endl;
            cout <<"Please choose the number corresponding with the problem you would like to view" <<endl;
            cout <<"1.) Guess the Number Game (Problem #34)"<< endl;
            cout <<"2.) The Towers of Hanoi using recusion (Problem #38)"<< endl;
            cout <<"3.) Minamum Value of Int, Float and Char (Problem 53)"<< endl;
            cout <<"4.) My Math Equasions. "<< endl;
            cout <<"5.) Recursion addition of any postive non whole number. (From Class)"<< endl;
            cin >> answer;
    
            if (answer == 1){
                GuessTheNumberGame Q34;
                Q34.guessingGame();
            }
            if (answer == 2){
                cout << "**** Towers of Hanoi ****" << endl;
                cout << "The games is a representation of the Towers of Hanoi" << endl;
                int a;
                cout << "Please enter the number of disks on the first tower: " << endl;
                cin >> a;
    
                TowersOfHanoi Q38;
                Q38.hanoiTowers( a, '1', '2', '3');
            }
            if (answer == 3){
                int answerthree = 0;
                    
                cout << "The following program will find the lowest of thee user inputed numbers, depending on the data type selected." << endl;
                cout << "First, Choose your data type." << endl;
                cout << "1.) INTERGER " << endl;
                cout << "2.) FLOAT" << endl;
                cout << "3.) CHAR" << endl;
                cin>> answerthree;
                cout << endl;
            }      
            if (answerthree == 1){
                int a;
                int b;
                int c;
                int r;
                    
                cout << " *** INTERGER *** " << endl;
                cout << " Enter the first number: " << endl;
                cin >> a;
                        
                cout << " Enter the second number: " << endl;
                cin >> b;
                        
                cout << " Enter the third number: " << endl;
                cin >> c;
                    
                r = minamum(a, b, c);
                        
                cout << "The Lowest number is " << r << endl;
            } 
            if (answerthree == 2){
                float d;
                float e;
                float f;
                int t;
                        
                cout << " *** FLOAT *** " << endl;
                cout << " Enter the first number: " << endl;
                cin >> d;
                        
                cout << " Enter the second number: " << endl;
                cin >> e;
                        
                cout << " Enter the third number: " << endl;
                cin >> f;
                    
                t = minamum(d, e, f);
                cout << "The Lowest number is " << t << endl;
            }
            if (answerthree ==3){
                char g;
                char h;
                char i;
                int z;
                    
                cout << " *** CHAR *** " << endl;
                cout << " Enter the first number: " << endl;
                cin >> g;
                        
                cout << " Enter the second number: " << endl;
                cin >> h;
                        
                cout << " Enter the third number: " << endl;
                cin >> i;
                    
                z = minamum(g, h, i);
                cout << "The Lowest 'number' is " << z << endl;
            }
            if (answer == 4){
                int answerTwo;
                cout << "Welcome to the MyMath section of homework 15" << endl;
                cout << "This section has multiple equastions that can be utlized." << endl;
                cout << "Please seclection an equastion" << endl;
                cout << "1.) Factorials using iteration." << endl<< endl;
                cout << "2.) Factorials using recursion." << endl<< endl;
                cout << "3.) Calucaltes the greatest common divisor of two numbers." << endl<< endl;
                cout << "4.) Cubes a number using int." << endl<< endl;
                cout << "5.) Cubes a number using double." << endl<< endl;
                cout << "6.) Cubes a number by overloading int and double." << endl<< endl;
                cin >> answerTwo;
            
                if (answerTwo == 1){
                    int p;
                    int z;
               
                    cout << "Please enter a number that will be factorialzed using interation: "<< endl;
                    cin >> p;
                            
                    z =fact_iter(p);
                    cout << "The factorial of that number is: " << z << endl;
                }
                if (answerTwo == 2){
                    int q;
                    int z;
                            
                    cout << "Please enter a number that will be factorialzed using recursion: "<< endl;
                    cin >> q;
                            
                    z=fact_rec(q);
                    cout << "The factorial of that number is: " << z << endl;
                }
                if (answerTwo == 3){
                    int w;
                    int x;
                    int z;
                
                    cout << "This program Calculates the Greatest common divisor of two user inpued numbers." << endl;
                    cout << "Enter the first number: " << endl;
                    cin >> w;
                    cout << "Enter the second number: " << endl;
                    cin >> x;
                            
                    z=gcd(w,x);
                    cout << "The greatest common diviosor of the two numbers is :" << z << "or" << z << endl;
                }
                if (answerTwo == 4){
                    int l;
                    int z;
                    cout << "Enter a number to be cubed. This number has to be whole: " << endl;
                    cin >> l;
                            
                     z = cube(l);
                    cout <<" The number cubed is equal to : " << z << endl; 
                }
                if (answerTwo == 5){
                            double k;
                            int z;
                            cout << "Enter a number to be cubed. This number does not have to be whole: " << endl;
                            cin >> k;
                            z = cube(k);
                
                        }
                    
                        if (answerTwo == 6)
                        {
                            double j;
                            int z;
                
                            cout << "Enter a number, to be cubed, regardless of it being whole or not(It sill has to be positive)."<<endl;
                            cin >> j;
                
                            z = cube(j);
                            
                
                            cout << "The cubed number is " << z <<endl;
                        }
                }

                if (answer == 5){
                    cout << "**** Recursion Extra Credit ****" << endl;
                    cout << " This program can add any non whole positive intergers." << endl;
    
                    long double i = 0;
                    long double j = 0;
                    long double z;
    
                    cout << "Enter the first number:" << endl;
                    cin >> i;
                    cout << "Enter the second number: " << endl;
                    cin >> j;
    
                    z = recurstionaddition(i, j);
                    cout << "The sum of the two numbers are: " << z << endl;
                }

            cout << "Would you like to choose anohter problem? y/n" << endl;
            cin >> reply;
        
            if(reply != 'y'){
                askagain = false;
            }else{
                p--;
            }  
        }
    }
    return 0;
}


/*
 ***** Hello and welcome to Homework Assignment 15 with Extra Credit *****
 
 Please choose the number corresponding with the problem you would like to view
 1.) Guess the Number Game (Problem #34)
 2.) The Towers of Hanoi using recusion (Problem #38)
 3.) Minamum Value of Int, Float and Char (Problem 53)
 4.) My Math Equasions.
 5.) Recursion addition of any postive non whole number. (From Class)
 1
 *** Welcome to the number guessing game. ***
 The computer will randomly generate a number between 1 and 1000, your are to guess that number.
 Please enter your first guess:
 500
 Your number was to low please guess again.
 Please enter your another guess:
 750
 Your number was to low please guess again.
 Please enter your another guess:
 900
 Your number was to high please guess again.
 Please enter your another guess:
 800
 Your number was to low please guess again.
 Please enter your another guess:
 850
 Your number was to high please guess again.
 Please enter your another guess:
 825
 Your number was to high please guess again.
 Please enter your another guess:
 810
 Your number was to high please guess again.
 Please enter your another guess:
 805
 Your number was to low please guess again.
 Please enter your another guess:
 808
 CORRECT!
 
 Would you like to play again? y/n
 n
 Would you like to choose anohter problem? y/n
 y
 ***** Hello and welcome to Homework Assignment 15 with Extra Credit *****
 
 Please choose the number corresponding with the problem you would like to view
 1.) Guess the Number Game (Problem #34)
 2.) The Towers of Hanoi using recusion (Problem #38)
 3.) Minamum Value of Int, Float and Char (Problem 53)
 4.) My Math Equasions.
 5.) Recursion addition of any postive non whole number. (From Class)
 2
 **** Towers of Hanoi ****
 The games is a representation of the Towers of Hanoi
 Please enter the number of disks on the first tower:
 5
 Disk 1  was moved from peg 1 to peg 3
 Disk 2  was moved from peg 1 to peg 2
 Disk 1  was moved from peg 3 to peg 2
 Disk 3  was moved from peg 1 to peg 3
 Disk 1  was moved from peg 2 to peg 1
 Disk 2  was moved from peg 2 to peg 3
 Disk 1  was moved from peg 1 to peg 3
 Disk 4  was moved from peg 1 to peg 2
 Disk 1  was moved from peg 3 to peg 2
 Disk 2  was moved from peg 3 to peg 1
 Disk 1  was moved from peg 2 to peg 1
 Disk 3  was moved from peg 3 to peg 2
 Disk 1  was moved from peg 1 to peg 3
 Disk 2  was moved from peg 1 to peg 2
 Disk 1  was moved from peg 3 to peg 2
 Disk 5  was moved from peg 1 to peg 3
 Disk 1  was moved from peg 2 to peg 1
 Disk 2  was moved from peg 2 to peg 3
 Disk 1  was moved from peg 1 to peg 3
 Disk 3  was moved from peg 2 to peg 1
 Disk 1  was moved from peg 3 to peg 2
 Disk 2  was moved from peg 3 to peg 1
 Disk 1  was moved from peg 2 to peg 1
 Disk 4  was moved from peg 2 to peg 3
 Disk 1  was moved from peg 1 to peg 3
 Disk 2  was moved from peg 1 to peg 2
 Disk 1  was moved from peg 3 to peg 2
 Disk 3  was moved from peg 1 to peg 3
 Disk 1  was moved from peg 2 to peg 1
 Disk 2  was moved from peg 2 to peg 3
 Disk 1  was moved from peg 1 to peg 3
 Would you like to choose anohter problem? y/n
 y
 ***** Hello and welcome to Homework Assignment 15 with Extra Credit *****
 
 Please choose the number corresponding with the problem you would like to view
 1.) Guess the Number Game (Problem #34)
 2.) The Towers of Hanoi using recusion (Problem #38)
 3.) Minamum Value of Int, Float and Char (Problem 53)
 4.) My Math Equasions.
 5.) Recursion addition of any postive non whole number. (From Class)
 3
 The following program will find the lowest of thee user inputed numbers, depending on the data type selected.
 First, Choose your data type.
 1.) INTERGER
 2.) FLOAT
 3.) CHAR
 1
 
 *** INTERGER ***
 Enter the first number:
 4
 Enter the second number:
 8
 Enter the third number:
 9
 The Lowest number is 4
 Would you like to choose anohter problem? y/n
 y
 ***** Hello and welcome to Homework Assignment 15 with Extra Credit *****
 
 Please choose the number corresponding with the problem you would like to view
 1.) Guess the Number Game (Problem #34)
 2.) The Towers of Hanoi using recusion (Problem #38)
 3.) Minamum Value of Int, Float and Char (Problem 53)
 4.) My Math Equasions.
 5.) Recursion addition of any postive non whole number. (From Class)
 3
 The following program will find the lowest of thee user inputed numbers, depending on the data type selected.
 First, Choose your data type.
 1.) INTERGER
 2.) FLOAT
 3.) CHAR
 2
 
 *** FLOAT ***
 Enter the first number:
 432
 Enter the second number:
 782
 Enter the third number:
 573
 The Lowest number is 432
 Would you like to choose anohter problem? y/n
 y
 ***** Hello and welcome to Homework Assignment 15 with Extra Credit *****
 
 Please choose the number corresponding with the problem you would like to view
 1.) Guess the Number Game (Problem #34)
 2.) The Towers of Hanoi using recusion (Problem #38)
 3.) Minamum Value of Int, Float and Char (Problem 53)
 4.) My Math Equasions.
 5.) Recursion addition of any postive non whole number. (From Class)
 3
 The following program will find the lowest of thee user inputed numbers, depending on the data type selected.
 First, Choose your data type.
 1.) INTERGER
 2.) FLOAT
 3.) CHAR
 3
 
 *** CHAR ***
 Enter the first number:
 a
 Enter the second number: 
 r
 Enter the third number: 
 &
 The Lowest 'number' is a
 Would you like to choose anohter problem? y/n
 y
 
 
 Please enter a number that will be factorialzed using recursion:
 4
 The factorial of that number is: 24
 
 Enter a number to be cubed. This number has to be whole:
 3
 The number cubed is equal to : 27
 
 Enter a number to be cubed. This number has to be whole:
 3.5
 The number cubed is equal to : 47.825
 
 */
