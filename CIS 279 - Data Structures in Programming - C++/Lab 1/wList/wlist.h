#include <iostream>
#include <string>
using namespace std;

const int MAXSIZE = 150;                                                        // Declares that the max size of the rare is a const value of 150.

class wlist
{
public:
    
    wlist();                                                                    // Constructor that intiliazes the class wlist.
	void add(const string& aword);                                              // Function that adds a string variable to the array.
    // This function starts at the largest variable (150) and moves it way down, so it will have 150 compuations.
    
    
    
    void remove(const string& obj);                                             // Function that removes a string variable to the array.
    // 
    
    
    
	bool isThere(const string& aword);                                          // Funciton that checks for a string variable from the array.
    
    
    
    
	friend ostream& operator<<(ostream& out, const wlist& obj);                 // Print function that prints out all of the objects in the array. 
    
    
    
    
	int getcap();                                                               // Int variable that declares 
    
private:
    
	string list[MAXSIZE];                                                       // Declaring a string array with the of it being [150]
	int quantity;
} ;