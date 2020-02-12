#include "Deck.h"

Deck::Deck()
{
    deck_array[0].set_rank('A');                                        // Initialzies A-K of Hearts
    deck_array[0].set_suit('H');
    deck_array[1].set_rank('2');
    deck_array[1].set_suit('H');
    deck_array[2].set_rank('3');
    deck_array[2].set_suit('H');
    deck_array[3].set_rank('4');
    deck_array[3].set_suit('H');
    deck_array[4].set_rank('5');
    deck_array[4].set_suit('H');
    deck_array[5].set_rank('6');
    deck_array[5].set_suit('H');
    deck_array[6].set_rank('7');
    deck_array[6].set_suit('H');
    deck_array[7].set_rank('8');
    deck_array[7].set_suit('H');
    deck_array[8].set_rank('9');
    deck_array[8].set_suit('H');
    deck_array[9].set_rank('T');
    deck_array[9].set_suit('H');
    deck_array[10].set_rank('J');
    deck_array[10].set_suit('H');
    deck_array[11].set_rank('Q');
    deck_array[11].set_suit('H');
    deck_array[12].set_rank('K');
    deck_array[12].set_suit('H');
    
    deck_array[13].set_rank('A');                                        // Initialzies A-K of Dimonds
    deck_array[13].set_suit('D');
    deck_array[14].set_rank('2');
    deck_array[14].set_suit('D');
    deck_array[15].set_rank('3');
    deck_array[15].set_suit('D');
    deck_array[16].set_rank('4');
    deck_array[16].set_suit('D');
    deck_array[17].set_rank('5');
    deck_array[17].set_suit('D');
    deck_array[18].set_rank('6');
    deck_array[18].set_suit('D');
    deck_array[19].set_rank('7');
    deck_array[19].set_suit('D');
    deck_array[20].set_rank('8');
    deck_array[20].set_suit('D');
    deck_array[21].set_rank('9');
    deck_array[21].set_suit('D');
    deck_array[22].set_rank('T');
    deck_array[22].set_suit('D');
    deck_array[23].set_rank('J');
    deck_array[23].set_suit('D');
    deck_array[24].set_rank('Q');
    deck_array[24].set_suit('D');
    deck_array[25].set_rank('K');
    deck_array[25].set_suit('D');
    
    deck_array[26].set_rank('A');                                         // Initialzies A-K of Spades
    deck_array[26].set_suit('S');
    deck_array[27].set_rank('2');
    deck_array[27].set_suit('S');
    deck_array[28].set_rank('3');
    deck_array[28].set_suit('S');
    deck_array[29].set_rank('4');
    deck_array[29].set_suit('S');
    deck_array[30].set_rank('5');
    deck_array[30].set_suit('S');
    deck_array[31].set_rank('6');
    deck_array[31].set_suit('S');
    deck_array[32].set_rank('7');
    deck_array[32].set_suit('S');
    deck_array[33].set_rank('8');
    deck_array[33].set_suit('S');
    deck_array[34].set_rank('9');
    deck_array[34].set_suit('S');
    deck_array[35].set_rank('T');
    deck_array[35].set_suit('S');
    deck_array[36].set_rank('J');
    deck_array[36].set_suit('S');
    deck_array[37].set_rank('Q');
    deck_array[37].set_suit('S');
    deck_array[38].set_rank('K');
    deck_array[38].set_suit('S');
    
    deck_array[39].set_rank('A');                                           // Initialzies A-K of Clubs
    deck_array[39].set_suit('C');
    deck_array[40].set_rank('2');
    deck_array[40].set_suit('C');
    deck_array[41].set_rank('3');
    deck_array[41].set_suit('C');
    deck_array[42].set_rank('4');
    deck_array[42].set_suit('C');
    deck_array[43].set_rank('5');
    deck_array[43].set_suit('C');
    deck_array[44].set_rank('6');
    deck_array[44].set_suit('C');
    deck_array[45].set_rank('7');
    deck_array[45].set_suit('C');
    deck_array[46].set_rank('8');
    deck_array[46].set_suit('C');
    deck_array[47].set_rank('9');
    deck_array[47].set_suit('C');
    deck_array[48].set_rank('T');
    deck_array[48].set_suit('C');
    deck_array[49].set_rank('J');
    deck_array[49].set_suit('C');
    deck_array[50].set_rank('Q');
    deck_array[50].set_suit('C');
    deck_array[51].set_rank('K');
    deck_array[51].set_suit('C');

    

}

Deck::Deck(const Deck&  passed_in_deck)                                 // Copy constructor that copies a deck that is passed into the constructor.
{
    how_many_cards = passed_in_deck.how_many_cards;                     // Sets the current decks cards equal to the cards in the passed in deck.
    for (int copy =0; copy < how_many_cards; copy++)                    // For loop that cycles through and copies each card depedending on how many
    {                                                                   // cards are being passed into the copy constructor.
        deck_array[copy] = passed_in_deck.deck_array[copy];             // copies each posistion in the copied array into the decks array.
    }
}

void Deck::cut()                                                // Cut method that allows you to copy the bottom 32 cards to the top of the deck
{                                                               // and then copy that top of the cards down to the bottom of the deck.
    card temporary_deck[52];                                    // Creates a temporary array that stores all of the data from the "deck_array".
    for (int i=0; i <52; i ++)                                  // For loop that copies the varaibles from one array to the other.
    {
        temporary_deck[i] = deck_array[i];
    }
    for (int i=27; i < 52; i++)                                 // For loop that copies the top 27 variables to the bottom of the array.
    {
        deck_array[i-26] = temporary_deck[i];
    }
    for (int i=0; i < 26; i++)                                  // For loop that copeis the bottom 27 variables to the top of the array. 
    {
        deck_array[i+26] = temporary_deck [i];
    }
}

void Deck::shuffle()                                             // Shuffle method that allows the suffling of a deck after it is initalzied.
{
    for (int i = 1; i < 500; i++)                                // Nested for loop that allows massive reordering of the cards.
    {
        for (int j = 0; j < 52; j++)                             // For loop thats int value is used to randomize the array variable.
        {
        int random = rand() % how_many_cards;                    // Initializes a sudo random number that will be used to shuffle.
        card temporary_card;                                     // Creates a temporary card holer.
        temporary_card = deck_array[j];                          // The temporary Card is used to store the card variable in array (j's) location.
        deck_array[j] = deck_array[random];                      // A sudo randomly chosen array number is assigned to array (j's) location.
        deck_array[random] = temporary_card;                     // The variable in random is assigned to the temorary cards variable.
        }
    }
}

card Deck::takeOne()                                                 // Deck method that removes a Card from the deck.
{
    if (how_many_cards > 0)                                          // Precondition checking if there are cards in the deck.
    {
        card return_card = deck_array[0];                            // Creates Card Object that is equal to the first position in the array, this card will be
                                                                     // the return object.
        for (int i = 0; i < how_many_cards; i++)                     // For loop that will move all of the cards up in the array.
        {
            deck_array[i] = deck_array[i+1];                         // Copies the card from the next position into the current position
        }
        how_many_cards--;                                            // Lower the amount of cards in the deck by one.
        return return_card;                                          // Returns the return_card variable that was stored easier.
    }else{
        return deck_array[0];                                        // Returns the 0 spot in the but does not incrament the "how_many_cards" variable.
    }
}

void Deck::addOne(const card&  passed_in_card)
{
    int copy_found =0;
    for (int i = 0; i < how_many_cards; i++)
    {
        if (passed_in_card == deck_array[i])
        {
            copy_found ++;
        }
    }
    if (copy_found != 0)
    {
       cout << "A Copy of the Card was found, the requested card was not added to the deck." << endl;
    }
    if (copy_found == 0)
    {
       cout << "A Copy of the Card was not found, the requested card was added to the deck." << endl;
       deck_array[how_many_cards] = passed_in_card;
       how_many_cards ++;
       for (int i =0; i < how_many_cards; i++)
       {
           cout << deck_array[i] << endl;
       }
    }
}

int Deck::getCount() const                                       // Deck Method that returns the current amount of cards in the deck.
{
    return how_many_cards;                                       // Returns the private variable how_many_cards.
}

bool Deck::contains(const card& refrence_card) const             // Checks the deck to see if a card exists in the deck and returns true if it does.
{
    for (int i =1; i <= how_many_cards; i++)                     // For loop to cycle through the whole deck and refrence each card.
    {
        if (refrence_card == deck_array[i-1])                    // Checks each spot in the deck for a matching card.
        {
            return true;                                         // If the card is found, the loop ends and the boolean function returns true.
        }
    }
    return false;                                                // If the loop completes and nothing is found, it returns false.
}

bool Deck::isEmpty() const                                       // Simple Boolean method that determins if the deck is empty or not.
{
    if (how_many_cards > 0)                                      // If statement that  checks the value of the variable how_many cards.
    {
        return true;                                             // If how_many_cards is greater then 0 it returns true.
    }else{
        return false;                                            // If how_many cards is less then or equal to zero it returns false.
    }
}


int Deck::largest() const
{
    Deck Comparison_Deck;
    int Card_Value =0;
    int Reacurring_Number =1;
    
    if ( how_many_cards > 0)
    {
        int array_location =0;
        for (int i = 0; i < how_many_cards; i++)
        {
            if (deck_array[i] == Comparison_Deck.deck_array[0])
            {
                if (Reacurring_Number < 52)
                {
                    Reacurring_Number = 52;
                    Card_Value = Reacurring_Number;
                    array_location = i;
                }

            }
            if (deck_array[i] == Comparison_Deck.deck_array[13])
            {
                if (Reacurring_Number < 51)
                {
                    Reacurring_Number = 51;
                    Card_Value = Reacurring_Number;
                    array_location = i;
                }

            }
            if (deck_array[i] == Comparison_Deck.deck_array[26])
            {
                if (Reacurring_Number < 50)
                {
                    Reacurring_Number = 50;
                    Card_Value = Reacurring_Number;
                    array_location = i;
                }
            }
            if (deck_array[i] == Comparison_Deck.deck_array[39])     // Ace of Clubs proceed by S, D, H
            {
                if (Reacurring_Number < 49)
                {
                    Reacurring_Number = 49;
                    Card_Value = Reacurring_Number;
                    array_location = i;
                }
            }
                
            if (deck_array[i] == Comparison_Deck.deck_array[12])
            {
                if (Reacurring_Number < 48)
                {
                    Reacurring_Number = 48;
                    Card_Value = Reacurring_Number;
                    array_location = i;
                }
            }
            if (deck_array[i] == Comparison_Deck.deck_array[25])
            {
                if (Reacurring_Number < 47)
                {
                    Reacurring_Number = 47;
                    Card_Value = Reacurring_Number;
                    array_location = i;
                }
            }
            if (deck_array[i] == Comparison_Deck.deck_array[40])
            {
                if (Reacurring_Number < 46)
                {
                    Reacurring_Number = 46;
                    Card_Value = Reacurring_Number;
                    array_location = i;
                }
            }
            if (deck_array[i] == Comparison_Deck.deck_array[51])       // King of Clubs proceed by S, D, H
            {
                if (Reacurring_Number < 45)
                {
                    Reacurring_Number = 45;
                    Card_Value = Reacurring_Number;
                    array_location = i;
                }
            }
            
            if (deck_array[i] == Comparison_Deck.deck_array[11])
            {
                if (Reacurring_Number < 44)
                {
                    Reacurring_Number = 44;
                    Card_Value = Reacurring_Number;
                    array_location = i;
                }
            }
            if (deck_array[i] == Comparison_Deck.deck_array[24])
            {
                if (Reacurring_Number < 43)
                {
                    Reacurring_Number = 43;
                    Card_Value = Reacurring_Number;
                    array_location = i;
                }
            }
            if (deck_array[i] == Comparison_Deck.deck_array[39])
            {
                if (Reacurring_Number < 42)
                {
                    Reacurring_Number = 42;
                    Card_Value = Reacurring_Number;
                    array_location = i;
                }
            }
            if (deck_array[i] == Comparison_Deck.deck_array[50])  // Queen of Clubs proceed by S, D, H
            {
                if (Reacurring_Number < 41)
                {
                    Reacurring_Number = 41;
                    Card_Value = Reacurring_Number;
                    array_location = i;
                }
            }
            if (deck_array[i] == Comparison_Deck.deck_array[10])
            {
                if (Reacurring_Number < 40)
                {
                    Reacurring_Number = 40;
                    Card_Value = Reacurring_Number;
                    array_location = i;
                }
            }
            if (deck_array[i] == Comparison_Deck.deck_array[23])
            {
                if (Reacurring_Number < 39)
                {
                    Reacurring_Number = 39;
                    Card_Value = Reacurring_Number;
                    array_location = i;
                }
            }
            if (deck_array[i] == Comparison_Deck.deck_array[38])
            {
                if (Reacurring_Number < 38)
                {
                    Reacurring_Number = 38;
                    Card_Value = Reacurring_Number;
                    array_location = i;
                }
            }
            if (deck_array[i] == Comparison_Deck.deck_array[49])  // Jack of Clubs proceed by S, D, H
            {
                if (Reacurring_Number < 37)
                {
                    Reacurring_Number = 37;
                    Card_Value = Reacurring_Number;
                    array_location = i;
                }
            }
            if (deck_array[i] == Comparison_Deck.deck_array[9])
            {
                if (Reacurring_Number < 36)
                {
                    Reacurring_Number = 36;
                    Card_Value = Reacurring_Number;
                    array_location = i;
                }
            }
            if (deck_array[i] == Comparison_Deck.deck_array[22])
            {
                if (Reacurring_Number < 35)
                {
                    Reacurring_Number = 35;
                    Card_Value = Reacurring_Number;
                    array_location = i;
                }
            }
            if (deck_array[i] == Comparison_Deck.deck_array[37])
            {
                if (Reacurring_Number < 34)
                {
                    Reacurring_Number = 34;
                    Card_Value = Reacurring_Number;
                    array_location = i;
                }
            }
            if (deck_array[i] == Comparison_Deck.deck_array[48])  // Ten of Clubs proceed by S, D, H
            {
                if (Reacurring_Number < 33)
                {
                    Reacurring_Number = 33;
                    Card_Value = Reacurring_Number;
                    array_location = i;
                }
            }
            if (deck_array[i] == Comparison_Deck.deck_array[8])
            {
                if (Reacurring_Number < 32)
                {
                    Reacurring_Number = 32;
                    Card_Value = Reacurring_Number;
                    array_location = i;
                }
            }
            if (deck_array[i] == Comparison_Deck.deck_array[21])
            {
                if (Reacurring_Number < 31)
                {
                    Reacurring_Number = 31;
                    Card_Value = Reacurring_Number;
                    array_location = i;
                }
            }
            if (deck_array[i] == Comparison_Deck.deck_array[36])
            {
                if (Reacurring_Number < 30)
                {
                    Reacurring_Number = 30;
                    Card_Value = Reacurring_Number;
                    array_location = i;
                }
            }
            if (deck_array[i] == Comparison_Deck.deck_array[47])  // Nine of Clubs proceed by S, D, H
            {
                if (Reacurring_Number < 29)
                {
                    Reacurring_Number = 29;
                    Card_Value = Reacurring_Number;
                    array_location = i;
                }
            }
            if (deck_array[i] == Comparison_Deck.deck_array[7])
            {
                if (Reacurring_Number < 28)
                {
                    Reacurring_Number = 28;
                    Card_Value = Reacurring_Number;
                    array_location = i;
                }
            }
            if (deck_array[i] == Comparison_Deck.deck_array[20])
            {
                if (Reacurring_Number < 27)
                {
                    Reacurring_Number = 27;
                    Card_Value = Reacurring_Number;
                    array_location = i;
                }
            }
            if (deck_array[i] == Comparison_Deck.deck_array[35])
            {
                if (Reacurring_Number < 26)
                {
                    Reacurring_Number = 26;
                    Card_Value = Reacurring_Number;
                    array_location = i;
                }
            }
            if (deck_array[i] == Comparison_Deck.deck_array[46])  // Eight of Clubs proceed by S, D, H
            {
                if (Reacurring_Number < 25)
                {
                    Reacurring_Number = 25;
                    Card_Value = Reacurring_Number;
                    array_location = i;
                }
            }
            if (deck_array[i] == Comparison_Deck.deck_array[6])
            {
                if (Reacurring_Number < 24)
                {
                    Reacurring_Number = 24;
                    Card_Value = Reacurring_Number;
                    array_location = i;
                }
            }
            if (deck_array[i] == Comparison_Deck.deck_array[19])
            {
                if (Reacurring_Number < 23)
                {
                    Reacurring_Number = 23;
                    Card_Value = Reacurring_Number;
                    array_location = i;
                }
            }
            if (deck_array[i] == Comparison_Deck.deck_array[34])
            {
                if (Reacurring_Number < 22)
                {
                    Reacurring_Number = 22;
                    Card_Value = Reacurring_Number;
                    array_location = i;
                }
            }
            if (deck_array[i] == Comparison_Deck.deck_array[45])  // Seven of Clubs proceed by S, D, H
            {
                if (Reacurring_Number < 21)
                {
                    Reacurring_Number = 21;
                    Card_Value = Reacurring_Number;
                    array_location = i;
                }
            }
            if (deck_array[i] == Comparison_Deck.deck_array[5])
            {
                if (Reacurring_Number < 20)
                {
                    Reacurring_Number = 20;
                    Card_Value = Reacurring_Number;
                    array_location = i;
                }
            }
            if (deck_array[i] == Comparison_Deck.deck_array[18])
            {
                if (Reacurring_Number < 19)
                {
                    Reacurring_Number = 19;
                    Card_Value = Reacurring_Number;
                    array_location = i;
                }
            }
            if (deck_array[i] == Comparison_Deck.deck_array[33])
            {
                if (Reacurring_Number < 18)
                {
                    Reacurring_Number = 18;
                    Card_Value = Reacurring_Number;
                    array_location = i;
                }
            }
            if (deck_array[i] == Comparison_Deck.deck_array[44])  // Six of Clubs proceed by S, D, H
            {
                if (Reacurring_Number < 17)
                {
                    Reacurring_Number = 17;
                    Card_Value = Reacurring_Number;
                    array_location = i;
                }
            }
            if (deck_array[i] == Comparison_Deck.deck_array[4])
            {
                if (Reacurring_Number < 16)
                {
                    Reacurring_Number = 16;
                    Card_Value = Reacurring_Number;
                    array_location = i;
                }
            }
            if (deck_array[i] == Comparison_Deck.deck_array[17])
            {
                if (Reacurring_Number < 15)
                {
                    Reacurring_Number = 15;
                    Card_Value = Reacurring_Number;
                    array_location = i;
                }
            }
            if (deck_array[i] == Comparison_Deck.deck_array[32])
            {
                if (Reacurring_Number < 14)
                {
                    Reacurring_Number = 14;
                    Card_Value = Reacurring_Number;
                    array_location = i;
                }
            }
            if (deck_array[i] == Comparison_Deck.deck_array[43])  // Five of Clubs proceed by S, D, H
            {
                if (Reacurring_Number < 13)
                {
                    Reacurring_Number = 13;
                    Card_Value = Reacurring_Number;
                    array_location = i;
                }
            }
            if (deck_array[i] == Comparison_Deck.deck_array[3])
            {
                if (Reacurring_Number < 12)
                {
                    Reacurring_Number = 12;
                    Card_Value = Reacurring_Number;
                    array_location = i;
                }
            }
            if (deck_array[i] == Comparison_Deck.deck_array[16])
            {
                if (Reacurring_Number < 11)
                {
                    Reacurring_Number = 11;
                    Card_Value = Reacurring_Number;
                    array_location = i;
                }
            }
            if (deck_array[i] == Comparison_Deck.deck_array[31])
            {
                if (Reacurring_Number < 10)
                {
                    Reacurring_Number = 10;
                    Card_Value = Reacurring_Number;
                    array_location = i;
                }
            }
            if (deck_array[i] == Comparison_Deck.deck_array[42])  // Four of Clubs proceed by S, D, H
            {
                if (Reacurring_Number < 9)
                {
                    Reacurring_Number = 9;
                    Card_Value = Reacurring_Number;
                    array_location = i;
                }
            }
            if (deck_array[i] == Comparison_Deck.deck_array[2])
            {
                if (Reacurring_Number < 8)
                {
                    Reacurring_Number = 8;
                    Card_Value = Reacurring_Number;
                    array_location = i;
                }
            }
            if (deck_array[i] == Comparison_Deck.deck_array[15])
            {
                if (Reacurring_Number < 7)
                {
                    Reacurring_Number = 7;
                    Card_Value = Reacurring_Number;
                    array_location = i;
                }
            }
            if (deck_array[i] == Comparison_Deck.deck_array[30])
            {
                if (Reacurring_Number < 6)
                {
                    Reacurring_Number = 6;
                    Card_Value = Reacurring_Number;
                    array_location = i;
                }
            }
            if (deck_array[i] == Comparison_Deck.deck_array[41])  // Three of Clubs proceed by S, D, H
            {
                if (Reacurring_Number < 5)
                {
                    Reacurring_Number = 5;
                    Card_Value = Reacurring_Number;
                    array_location = i;
                }
            }
            if (deck_array[i] == Comparison_Deck.deck_array[1])
            {
                if (Reacurring_Number < 4)
                {
                    Reacurring_Number = 4;
                    Card_Value = Reacurring_Number;
                    array_location = i;
                }
            }
            if (deck_array[i] == Comparison_Deck.deck_array[14])
            {
                if (Reacurring_Number < 3)
                {
                    Reacurring_Number = 3;
                    Card_Value = Reacurring_Number;
                    array_location = i;
                }
            }
            if (deck_array[i] == Comparison_Deck.deck_array[29])
            {
                if (Reacurring_Number < 2)
                {
                    Reacurring_Number = 2;
                    Card_Value = Reacurring_Number;
                    array_location = i;
                }
            }
            if (deck_array[i] == Comparison_Deck.deck_array[40])  // Two of Clubs proceed by S, D, H
            {
                if (Reacurring_Number < 1)
                {
                    Reacurring_Number = 1;
                    Card_Value = Reacurring_Number;
                    array_location = i;
                }
            }
            
            
        }
        return Card_Value;
    }else{
        return 0;
    }
}

bool Deck::operator==(const Deck& obj) const
{
    if (how_many_cards != obj.how_many_cards)
    {
        return false;
    }
    int copy_found =0;
    for (int i =0; i < how_many_cards; i++)
    {
        for (int j =0; j < how_many_cards; j++)
        {
            if(deck_array[i] == deck_array[j])
            {
                copy_found++;
            }
        }
    }
    if (copy_found >= how_many_cards)
    {
        return true;
    }else{
        return false;
    }
}


Deck Deck::merge(const Deck& obj1, const Deck& obj2)                                    // Merge method that allows you to pass two decks in and get one deck out, the
                                                                                        // passed in deck will only ontaint varibles that are in both.
{
    Deck merged_deck;                                                                   // Creates a return object that will store both decks.
    int mered_array_location = 0;
    

    for (int i =0; i < obj1.how_many_cards; i++)
    {
        for (int j =0; j < obj2.how_many_cards; j++)
        {
            if (obj1.deck_array[i] ==  obj2.deck_array[j])
            {
                merged_deck.deck_array[mered_array_location] = obj1.deck_array[i];
                mered_array_location ++;
            }
        }
    }
    merged_deck.how_many_cards = mered_array_location;
    return merged_deck;                                               // so that it doesnt overide the previous amounts in the array
}


ostream& operator<<(ostream& out, const Deck& passed_in_deck)          // ostream overloader that allows you to output a deck object to the screen. 
{
    card temporary_array[104];                                          // Creates a temporary array that you can print from.
    for (int i =0; i < passed_in_deck.how_many_cards; i++)             // For Loop that copies all of the variables from the passed in deck to the new deck.
    {
        temporary_array[i] = passed_in_deck.deck_array[i];
    }
    for (int i =0; i < passed_in_deck.how_many_cards; i++)             // For loop that will print all of the cards from the temporary array.
    {
        out << temporary_array[i] << endl;                             // Each printing object will use the output overloader from the "card" class.
    }
    return out;                                                        // Retruns the output. 
}
