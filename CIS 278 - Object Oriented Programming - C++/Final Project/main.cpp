/*
 Main written by Ryan Patterson
 Class CIS 278
*/


#include <iostream>
#include <stdlib.h> 
#include <time.h>


class BattleshipGame {
    private:
    const static int GRID_SIZE = 5;
    char grid[GRID_SIZE][GRID_SIZE];
    
    public:
    // Creates the "Phyiscal Board" using the information from the private class.
    BattleshipGame(){
        for (int a = 0; a < GRID_SIZE; a++){
            for (int b = 0; b < GRID_SIZE; b++){
                grid[a][b] = '_';
            }
        }
    }
    
    // Calls and displays the current grid status;
    void displayGrid(){
        
        using namespace std;

        for (int a = 0; a < GRID_SIZE; a++){
            cout << (a + 1) << " ";
            cout << endl;
        }
        
        for (int b = 0; b < GRID_SIZE; b++){
            cout << " " << (char)('A' + b) << "  ";
            for (int c = 0; c < GRID_SIZE; c++){
                cout << grid[b][c];
                if (c < GRID_SIZE - 1){
                    cout << '|'; 
                }
            }
            cout << endl; 
        }
    }
    
    void hideShip(){
        using namespace std;

        int orientation;
        orientation = rand() % 2 + 1;
        
        // Orientation is Vertical
        if (orientation == 1){
            int vertical;
            int horizontal;
            
            horizontal = rand() %2 + 1; //Randomize Row
            vertical = rand() %4 +1; //Randomize Coloumn
            

            grid[horizontal][vertical] = {'S'};
            vertical = vertical +1;
            grid[horizontal][vertical] = 'S';
            vertical = vertical +1;
            grid[horizontal][vertical] = 'S';
            vertical = vertical +1;
            grid[horizontal][vertical] = 'S';

        }
        
        // Orientation is Horizontal
        if (orientation ==2){
            int vertical;
            int horizontal;
            
            horizontal = rand() %4 +1; // Randomize Row
            vertical =rand() %2 +1; // Randomize Coloumn
            
            grid[horizontal][vertical] = 'S';
            horizontal = horizontal +1;
            grid[horizontal][vertical] = 'S';
            horizontal = horizontal +1;
            grid[horizontal][vertical] = 'S';
            horizontal = horizontal +1;
            grid[horizontal][vertical] = 'S';
        }
    }
    
    
    void playBattleship(){
        using namespace std;
        
        int missCount = 0;
        int hitCount = 0;
        char verticalPosition;
        int horizontalPosition;
        
        
        while (hitCount < 5){
            cout << "Hit Count: " << hitCount << "    Miss Count: " << missCount << endl << endl;
            
            cout << "Please Enter A Location: (Example: B3)" << endl;
            cin >> verticalPosition;
            cin >> horizontalPosition;
        
            verticalPosition = verticalPosition - 65;
            horizontalPosition = horizontalPosition -1;
            
            if (grid[verticalPosition][horizontalPosition] == 'S'){
                grid[verticalPosition][horizontalPosition] = 'X';
                hitCount ++;
            }else{
                grid[verticalPosition][horizontalPosition] = '.';
                missCount ++;
            }
            displayGrid();
        }
        cout << "GAME OVER!" << endl;
    }
};


int main(){
    srand ( time(NULL) );
    
    BattleshipGame build;
    build.displayGrid();
    
    BattleshipGame hide;
    hide.hideShip();
    
    BattleshipGame play;
    play.playBattleship();
    
    return 0;
}

/*
 1 2 3 4 5
 A  _|_|_|_|_
 B  _|_|_|_|_
 C  _|_|_|_|_
 D  _|_|_|_|_
 E  _|_|_|_|_
 Hit Count: 0    Miss Count: 0
 
 Please Enter A Location: (Example: B3)
 A2
 1 2 3 4 5
 A  _|.|_|_|_
 B  _|_|_|_|_
 C  _|_|_|_|_
 D  _|_|_|_|_
 E  _|_|_|_|_
 Hit Count: 0    Miss Count: 1
 
 Please Enter A Location: (Example: B3)
 B3
 1 2 3 4 5
 A  _|.|_|_|_
 B  _|_|.|_|_
 C  _|_|_|_|_
 D  _|_|_|_|_
 E  _|_|_|_|_
 Hit Count: 0    Miss Count: 2
 
 Please Enter A Location: (Example: B3)
 C1
 1 2 3 4 5
 A  _|.|_|_|_
 B  _|_|.|_|_
 C  .|_|_|_|_
 D  _|_|_|_|_
 E  _|_|_|_|_
 Hit Count: 0    Miss Count: 3
 
 Please Enter A Location: (Example: B3)
 D3
 1 2 3 4 5
 A  _|.|_|_|_
 B  _|_|.|_|_
 C  .|_|_|_|_
 D  _|_|.|_|_
 E  _|_|_|_|_
 Hit Count: 0    Miss Count: 4
 
 Please Enter A Location: (Example: B3)
 C4
 1 2 3 4 5
 A  _|.|_|_|_
 B  _|_|.|_|_
 C  .|_|_|.|_
 D  _|_|.|_|_
 E  _|_|_|_|_
 Hit Count: 0    Miss Count: 5
 
 Please Enter A Location: (Example: B3)
 E3
 1 2 3 4 5
 A  _|.|_|_|_
 B  _|_|.|_|_
 C  .|_|_|.|_
 D  _|_|.|_|_
 E  _|_|.|_|_
 Hit Count: 0    Miss Count: 6
 
 Please Enter A Location: (Example: B3)
 A1
 1 2 3 4 5
 A  .|.|_|_|_
 B  _|_|.|_|_
 C  .|_|_|.|_
 D  _|_|.|_|_
 E  _|_|.|_|_
 Hit Count: 0    Miss Count: 7
 
 Please Enter A Location: (Example: B3)
 A4
 1 2 3 4 5
 A  .|.|_|.|_
 B  _|_|.|_|_
 C  .|_|_|.|_
 D  _|_|.|_|_
 E  _|_|.|_|_
 Hit Count: 0    Miss Count: 8
 
 Please Enter A Location: (Example: B3)
 A3
 1 2 3 4 5
 A  .|.|.|.|_
 B  _|_|.|_|_
 C  .|_|_|.|_
 D  _|_|.|_|_
 E  _|_|.|_|_
 Hit Count: 0    Miss Count: 9
 
 Please Enter A Location: (Example: B3)
 A5
 1 2 3 4 5
 A  .|.|.|.|.
 B  _|_|.|_|_
 C  .|_|_|.|_
 D  _|_|.|_|_
 E  _|_|.|_|_
 Hit Count: 0    Miss Count: 10
 
 Please Enter A Location: (Example: B3)
 B1
 1 2 3 4 5
 A  .|.|.|.|.
 B  .|_|.|_|_
 C  .|_|_|.|_
 D  _|_|.|_|_
 E  _|_|.|_|_
 Hit Count: 0    Miss Count: 11
 
 Please Enter A Location: (Example: B3)
 B2
 1 2 3 4 5
 A  .|.|.|.|.
 B  .|.|.|_|_
 C  .|_|_|.|_
 D  _|_|.|_|_
 E  _|_|.|_|_
 Hit Count: 0    Miss Count: 12
 
 Please Enter A Location: (Example: B3)
 B4
 1 2 3 4 5
 A  .|.|.|.|.
 B  .|.|.|.|_
 C  .|_|_|.|_
 D  _|_|.|_|_
 E  _|_|.|_|_
 Hit Count: 0    Miss Count: 13
 
 Please Enter A Location: (Example: B3)
 B5
 1 2 3 4 5
 A  .|.|.|.|.
 B  .|.|.|.|.
 C  .|_|_|.|_
 D  _|_|.|_|_
 E  _|_|.|_|_
 Hit Count: 0    Miss Count: 14
 
 Please Enter A Location: (Example: B3)
 C2
 1 2 3 4 5
 A  .|.|.|.|.
 B  .|.|.|.|.
 C  .|.|_|.|_
 D  _|_|.|_|_
 E  _|_|.|_|_
 Hit Count: 0    Miss Count: 15
 
 Please Enter A Location: (Example: B3)
 C3
 1 2 3 4 5
 A  .|.|.|.|.
 B  .|.|.|.|.
 C  .|.|.|.|_
 D  _|_|.|_|_
 E  _|_|.|_|_
 Hit Count: 0    Miss Count: 16
 
 Please Enter A Location: (Example: B3)
 C5
 1 2 3 4 5
 A  .|.|.|.|.
 B  .|.|.|.|.
 C  .|.|.|.|.
 D  _|_|.|_|_
 E  _|_|.|_|_
 Hit Count: 0    Miss Count: 17
 
 Please Enter A Location: (Example: B3)
 D1
 1 2 3 4 5
 A  .|.|.|.|.
 B  .|.|.|.|.
 C  .|.|.|.|.
 D  .|_|.|_|_
 E  _|_|.|_|_
 Hit Count: 0    Miss Count: 18
 
 Please Enter A Location: (Example: B3)
 D2
 1 2 3 4 5
 A  .|.|.|.|.
 B  .|.|.|.|.
 C  .|.|.|.|.
 D  .|.|.|_|_
 E  _|_|.|_|_
 Hit Count: 0    Miss Count: 19
 
 Please Enter A Location: (Example: B3)
 D4
 1 2 3 4 5
 A  .|.|.|.|.
 B  .|.|.|.|.
 C  .|.|.|.|.
 D  .|.|.|.|_
 E  _|_|.|_|_
 Hit Count: 0    Miss Count: 20
 
 Please Enter A Location: (Example: B3)
 D5
 1 2 3 4 5
 A  .|.|.|.|.
 B  .|.|.|.|.
 C  .|.|.|.|.
 D  .|.|.|.|.
 E  _|_|.|_|_
 Hit Count: 0    Miss Count: 21
 
 Please Enter A Location: (Example: B3)
 E1
 1 2 3 4 5
 A  .|.|.|.|.
 B  .|.|.|.|.
 C  .|.|.|.|.
 D  .|.|.|.|.
 E  .|_|.|_|_
 Hit Count: 0    Miss Count: 22
 
 Please Enter A Location: (Example: B3)
 E2
 1 2 3 4 5
 A  .|.|.|.|.
 B  .|.|.|.|.
 C  .|.|.|.|.
 D  .|.|.|.|.
 E  .|.|.|_|_
 Hit Count: 0    Miss Count: 23
 
 Please Enter A Location: (Example: B3)
 E4
 1 2 3 4 5
 A  .|.|.|.|.
 B  .|.|.|.|.
 C  .|.|.|.|.
 D  .|.|.|.|.
 E  .|.|.|.|_
 Hit Count: 0    Miss Count: 24
 
 Please Enter A Location: (Example: B3)
 E5
 1 2 3 4 5
 A  .|.|.|.|.
 B  .|.|.|.|.
 C  .|.|.|.|.
 D  .|.|.|.|.
 E  .|.|.|.|.
 Hit Count: 0    Miss Count: 25
 
 Please Enter A Location: (Example: B3)
 */
