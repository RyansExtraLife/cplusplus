/*
 Main written by Ryan Patterson
 Class CIS 278
*/

#include <iostream>
#include <ctime>
#include <cstdlib>

class GuessTheNumberGame{
  
    public:
    void guessingGame(){
        using namespace std;
        int guess = 0;
        int random = rand()%1000+1;;
        char answer;
        
        cout << " *** Welcome to the number guessing game. *** " << endl;
        cout << "The computer will randomly generate a number between 1 and 1000, your are to guess that number. " << endl;
        int replay = true;
        while (replay == true){
            cout << "Please enter your first guess: " << endl;
            cin >> guess;
        
            while (guess != random){
                if (guess > random){
                    cout << "Your number was to high please guess again." << endl;
                    cout << "Please enter your another guess: " << endl;
                    cin >> guess;
                }
                if (guess < random){
                    cout << "Your number was to low please guess again." << endl;
                    cout << "Please enter your another guess: " << endl;
                    cin >> guess;
                }
                if (guess > 1000  || guess < 0){
                    cout << "Your number was not in the range of 1-1000." << endl;
                    cout << "Please enter your another guess: " << endl;
                    cin >> guess;
                }
            }
            cout << "CORRECT!" << endl << endl;
            cout << "Would you like to play again? y/n " <<endl;
            cin >> answer;

            if(answer != 'y'){
                replay = false;
            }
        }
    }
};

int main(){
    GuessTheNumberGame Q34;
    Q34.guessingGame();
}

