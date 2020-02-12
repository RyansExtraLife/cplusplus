#include "Card.h"

card::card()                                                    //Default Constructor that sets the suit to 'A' and rank to 'H'
{
    suit = 'H';                                                 //Sets the suit to 'A'
    rank = 'A';                                                 //Sets the rank to 'H'
}

card::card(char passed_in_suit, char passed_in_rank)            //Creates a Card object with two passed in values.
{
    suit = passed_in_suit;                                      //Sets the suit to the passed in suit variable.
    rank = passed_in_rank;                                      //Sets the rank to the passed in rank variable.
}

char card::get_suit ()                                          //Get_Suit method that returns the suit if it is requested.
{
    return suit;                                                //Returns the objects suit.
}

char card::get_rank ()                                          //Get_Rank method that returns the rank if it is requested.
{
    return rank;                                                //Returns the objects rank.
}

void card::set_suit (char passed_in_suit)
{
    suit = passed_in_suit;
}

void card::set_rank (char passed_in_rank)
{
    rank = passed_in_rank;
}
ostream& operator<<(ostream& out, const card& passed_in_card)
{
    out << " " << passed_in_card.rank << " of " << passed_in_card.suit << "'s ";
    return out;
}

bool card::operator==(const card& obj) const
{
    if (suit == obj.suit && rank == obj.rank)
    {
         return true;
    }else{
        return false;
    }
}



