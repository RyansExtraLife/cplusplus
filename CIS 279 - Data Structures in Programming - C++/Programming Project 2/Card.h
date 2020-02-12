#ifndef __Programming_Project_2__Card__
#define __Programming_Project_2__Card__

#include <iostream>
using namespace std;

class card{
private:
    char suit;
    char rank;
    
public:
    card();                                                         // Default Constructor for Card Objects.
    card(char suit, char rank);                                     // Constructor that sets a cards suit and rank
                                                                    // through passed in values.

    friend ostream& operator<<(ostream& out, const card& obj);      // Allows the output of Card Data.
    bool operator==(const card& obj) const;
    
    char get_suit();                                                // Get_Suit allows refrencing the suit of the card.
    char get_rank();                                                // Get_Rank allows refrencing the rank of the card. 
    void set_suit(char suit);
    void set_rank(char rank);

};




#endif /* defined(__Programming_Project_2__Card__) */
