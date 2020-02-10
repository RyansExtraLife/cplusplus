/*
 Main written by Ryan Patterson
 Online class CIS 118
*/

#include <iostream>

using namespace std;

char CodeLetter(char c){
    return c + 1;
}

char DecodeLetter(char c){
    return c - 1;
}

char CodeLetter(char c);
char DecodeLetter(char c);

int main ()
{
    char codedLetter;
    char decodedLetter;
    char letter = '$' ;
    
    cout << "Letter = " << letter <<endl;
    codedLetter = CodeLetter(letter);
    
    cout << "Coded Letter = " << codedLetter<< endl;
    decodedLetter=DecodeLetter(codedLetter);
    
    cout << "Decoded Letter = " <<decodedLetter << endl;
    
    return 0;
}

