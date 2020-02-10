/*
 Main written by Ryan Patterson
 Online class CIS 118
 */

#include <IOSTREAM>

using namespace std;

int main (){
    
    int i;
    int j;
    int k;

    // This is looping down and multiplying with "j".
    for ( i = 1 ; i <= 12 ; i++){
        // This is looping right and multiplying with "i".
        for (j = 1 ; j <= 12 ; j++){
            // the two loops multiplying together to make "k"
            k = i * j;
            // Each box is the equasion of "i" time "j" in its current loop.
            // I used "printf" instead of cout to make the chart look better, otherwise it would be crammed.
            printf ("%4d ",k);
        }
        // I used "printf" instead of cout to make the chart look better, otherwise it would be crammed.
        printf("\n");
    }
}

