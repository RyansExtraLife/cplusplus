/*
 Main written by Ryan Patterson
 Class CIS 279
*/

#include "wlist.h"
#include <iostream>
#include <string>

using namespace std;



int main (){
    wlist words;                                                                // Creates object from class wlist named words.
    string searchword;                                                          // Creates a string named searchword, used for searching the array.
    string removeWord;                                                          // Creates a string named remvoeWord, used to remvoe words from the array.
    
    words.add("hi");                                                            // Adds string "hi" to object words.
    words.add("bye");                                                           // Adds string "bye" to object words.
    words.add("xxx");                                                           // Adds string "xxx" to object words.
    cout << words << endl;                                                      // Prints each of the variables stored in the object words. 
    
    
    cout << "enter a word to remove" << endl;
    cin >> removeWord;
    // A   Because there is 150 variables in the array the average computations would be 75.
    if (words.isThere(removeWord)){
        // B   Because there is 150 variables in the array the average computations would be 75 + 1 for the remvoal and copy.
        words.remove(removeWord);  
        cout << "The word has been removed form the list." << endl;
    }else{
        cout << "The word is not in the list." << endl;
    }
   
    cout << "enter a word to remove" << endl;
    cin >> removeWord;
    // A   Because there is 150 variables in the array the average computations would be 75.
    if (words.isThere(removeWord)){
        // B   Because there is 150 variables in the array the average computations would be 75 + 1 for the remvoal and copy.
        words.remove(removeWord);
        cout << "The word has been removed form the list." << endl;
    }else{
        cout << "The word is not in the list." << endl;
    }
   
    cout << "enter a word to remove" << endl;
    cin >> removeWord;
    // A   Because there is 150 variables in the array the average computations would be 75.
    if (words.isThere(removeWord)){
        // B   Because there is 150 variables in the array the average computations would be 75 + 1 for the remvoal and copy.
        words.remove(removeWord);
        cout << "The word has been removed form the list." << endl;
    }else{
        cout << "The word is not in the list." << endl;
    }

                                                                                // Three word searches allowing user to find  words in the string array.
    cout << "enter a word to search for" << endl;                               // Prompts the user to search for a word.
    cin >> searchword;                                                          // Stores user entered value in order to use it for search.
    if (words.isThere(searchword)){                                             // If else statement, it is used to delare if a matching string was found.
        cout << "it's there" << endl;                                           // String was found.
    }else{
        cout << "it's not there" << endl;                                       // String was not found.
    }

    cout << "enter a word to search for" << endl;                               // Prompts the user to search for a word.
    cin >> searchword;                                                          // Stores user entered value in order to use it for search.
    if (words.isThere(searchword)){                                             // If else statement, it is used to delare if a matching string was found.
        cout << "it's there" << endl;                                           // String was found.
    }else{
        cout << "it's not there" << endl;                                       // String was not found.
    }

    cout << "enter a word to search for" << endl;                               // Prompts the user to search for a word.
    cin >> searchword;                                                          // Stores user entered value in order to use it for search.
    if (words.isThere(searchword)){                                              // If else statement, it is used to delare if a matching string was found.
        cout << "it's there" << endl;                                           // String was found.
    }else{
        cout << "it's not there" << endl;                                       // String was not found.
    }
}