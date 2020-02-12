#include "wlist.h"

wlist::wlist(){
    quantity = 0;
}

void wlist::add(const string& aword){                                            // Function that addes strings to the string array.
	for ( int i = quantity; i>0; i--){                                           // For loop that addes the string to the next empty spot in the array
		list[i] = list[i-1];
    }                                                   
	list[0] = aword;                                                            // Adds the passed in string to the first position of the array.
	quantity++;                                                                 // Adds one to the quanity. 
}

void wlist::remove(const string& obj){
    int index = 0;

    while (index < quantity && list[index] != obj){
            index ++;
        }
    
    if (index < quantity){
            list[index] = list[quantity-1];
            quantity --;
        }
    }
        


bool wlist::isThere(const string& aword){
	int index = 0;
	while (index < quantity && list[index] != aword)
		index++;
	return index < quantity;
}

int wlist::getcap(){
	return MAXSIZE;
}

ostream& operator<<(ostream& out, const wlist& obj){                            // Print function that prints the words in order of there location in the string array.
    for (int index = 0; index < obj.quantity; index++)                          // For loop that allows priting throughout the entire array.
		out << obj.list[index] << " ";                                          // Prints out a string from the index followed by a space.
	return out;                                                                 
}