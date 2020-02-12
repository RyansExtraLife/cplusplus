#include <iostream>
#include <stdlib.h>
#include <time.h>

#include "Card.h"
#include "Deck.h"

using namespace std;


int main ()
{
    srand (static_cast<unsigned>(time(static_cast<time_t *>(0))));                                      // Initializes the rand string in order to randomize the shuffle
                                                                                                        // method within the deck class.
    cout << "*** Contents of the Deck ****" <<endl <<endl;
    Deck deckOne;                                                                                       // Creates one new deck of cards titled "deckOne".
    cout << deckOne;                                                                                    // Prints the contents of "deckOne".
    
    cout << endl << "*** Contents of the Shuffled Deck ****" <<endl <<endl;
    deckOne.shuffle();                                                                                  // Uses the "Shuffle" method on the object "deckOne".
    cout << deckOne;                                                                                    // Prints the contents of "deckOne".
    
    cout << endl << "*** Countent of the Deck after it is cut ****" << endl << endl;
    deckOne.cut();                                                                                      // Uses the "Cut" method on the object "deckOne".
    cout << deckOne;                                                                                    // Prints the contents of "deckOne".
    
    int draw_amount = 0;                                                                                // Initializes the varible "draw_amount".
    while (draw_amount < 1 or draw_amount > 52)                                                         // While loop that cycles through untill the user inputs a number
    {                                                                                                   // between the numbers 1 and 52.
        cout << endl << "How many cards would you like to remove from the deck? (1-52):  " << endl;
        cin >> draw_amount;                                                                             // Inserts the user inputed number into the variable "draw_amount".
    }
    
    cout << endl <<  "*** Cards Removed from Deck ***" << endl;
    for (int i =1; i <= draw_amount; i++)                                                               // Loop that will run as many times as the user submitted for
    {                                                                                                   // the variable "draw_amount".
        card temporary_card;                                                                            // Creates a temporary card variable  that holds the removed card.
        temporary_card = deckOne.takeOne();                                                             // Sets the varible to the card removed from the deck with the
        cout << temporary_card <<endl;                                                                  // "takeOne" method, then prints the temp card with the
    }

    cout << endl << endl << "*** Cards Remaing in Deck **" << endl;
    cout << deckOne;                                                                                    // Prints out the remaining cards in the deck.
    
    cout << endl << "*** How many cards remain in the deck? ***" << endl;
    cout << deckOne.getCount() << endl << endl;                                                         // Prints out the amount of cards that are in the deck.
    
    card search_card;                                                                                   // Creates a "card" that will be used to search the deck of
                                                                                                        // remaining cards. 
    char suit = 0;                                                                                      // Initializes a char variable to hold the suit of the card.
    char rank = 0;                                                                                      // Initializes a char variable to hold the rank of the card.
    
    int suit_search =0;                                                                                 // Varible that is used to break while loop if an if statements
    while (suit_search == 0)                                                                            // criteria is met.
    {
    cout << "What card do you want to look for?" << endl;
    cout << "Enter the suit: (D,C,S,H) " << endl;
    cout << "Letters must be Capitalized." << endl;
    cin >> suit;
       if (suit == 'D')                                                                                 // If a user submitted char is equal to a valid char charecter
       {                                                                                                // The while loop breaks and the variable is stored.
           suit_search ++;
       }
       if (suit == 'C')
       {
          suit_search ++;
       }
       if (suit == 'S')
       {
            suit_search ++;
       }
       if (suit == 'H')
       {
           suit_search ++;
       }
    }
    cout << endl;
    search_card.set_suit(suit);                                                                        // Sets the suit of the search_card to the varible from the user.
    
    
    int rank_search =0;                                                                                // Varible that is used to break while loop if an if statements
    while (rank_search ==0)                                                                            // criteria is met.
    {
    cout << "Enter the rank: (A,2,3,4,5,6,7,8,9,T,J,Q,K) " << endl;
    cout << "Letters must be Capitalized." << endl;
    cin >> rank;
        if (rank == 'A')                                                                               // If a user submitted char is equal to a valid char charecter
        {                                                                                              // The while loop breaks and the variable is stored.
            rank_search ++;
        }
        if (rank == '2')
        {
            rank_search ++;
        }
        if (rank == '3')
        {
            rank_search ++;
        }
        if (rank == '4')
        {
            rank_search ++;
        }
        if (rank == '5')
        {
            rank_search ++;
        }
        if (rank == '6')
        {
            rank_search ++;
        }
        if (rank == '7')
        {
            rank_search ++;
        }
        if (rank == '8')
        {
            rank_search ++;
        }
        if (rank == '9')
        {
            rank_search ++;
        }
        if (rank == 'T')
        {
            rank_search ++;
        }
        if (rank == 'J')
        {
            rank_search ++;
        }
        if (rank == 'Q')
        {
            rank_search ++;
        }
        if (rank == 'K')
        {
            rank_search ++;
        }
    }
    cout << endl;
    search_card.set_rank(rank);                                                                         // Sets the suit of the search_card to the varible from the user.
    
    cout << "*** Searching for requested Card ***" << endl;
    if (deckOne.contains(search_card) == true)                                                          // If the user submitted card is in the deck.
    {
        cout << search_card << " is currently in the Deck" << endl << endl;
    }
    if (deckOne.contains(search_card) == false)                                                         // If the user submitted card is not the deck.
    {
        cout << search_card << " is not currently in the Deck" << endl << endl;
    }
    
    card add_card;                                                                                      // Creates a "card" that will be used to search the deck of
                                                                                                        // remaining cards.
    char suit_add = 'H';                                                                                  // Initializes a char variable to hold the suit of the card.
    char rank_add = 'A';                                                                                  // Initializes a char variable to hold the rank of the card.
    
    int add_suit_search =0;                                                                             // Varible that is used to break while loop if an if statements
    while (add_suit_search == 0)                                                                        // criteria is met.
    {
        cout << "What card do you want to add to the deck?" << endl;
        cout << "Enter the suit: (D,C,S,H) " << endl;
        cout << "Letters must be Capitalized." << endl;
        cin >> suit_add;
        if (suit_add == 'D')                                                                             // If a user submitted char is equal to a valid char charecter
        {                                                                                                // The while loop breaks and the variable is stored.
            add_suit_search ++;
            suit_add = 'D';
        }
        if (suit_add == 'C')
        {
            add_suit_search ++;
        }
        if (suit_add == 'S')
        {
            add_suit_search ++;
        }
        if (suit_add == 'H')
        {
            add_suit_search ++;
        }
    }
    cout << endl;
    add_card.set_suit(suit_add);                                                                              // Sets the suit of the search_card to the varible from the user.
    
    
    int add_rank_search =0;                                                                               // Varible that is used to break while loop if an if statements
    while (add_rank_search ==0)                                                                           // criteria is met.
    {
        cout << "Enter the rank: (A,2,3,4,5,6,7,8,9,T,J,Q,K) " << endl;
        cout << "Letters must be Capitalized." << endl;
        cin >> rank_add;
        if (rank_add == 'A')                                                                               // If a user submitted char is equal to a valid char charecter
        {                                                                                              // The while loop breaks and the variable is stored.
            add_rank_search ++;
        }
        if (rank_add == '2')
        {
            add_rank_search ++;
        }
        if (rank_add == '3')
        {
            add_rank_search ++;
        }
        if (rank_add == '4')
        {
            add_rank_search ++;
        }
        if (rank_add == '5')
        {
            add_rank_search ++;
        }
        if (rank_add == '6')
        {
            add_rank_search ++;
        }
        if (rank_add == '7')
        {
            add_rank_search ++;
        }
        if (rank_add == '8')
        {
            add_rank_search ++;
        }
        if (rank_add == '9')
        {
            add_rank_search ++;
        }
        if (rank_add == 'T')
        {
            add_rank_search ++;
        }
        if (rank_add == 'J')
        {
            add_rank_search ++;
        }
        if (rank_add == 'Q')
        {
            add_rank_search ++;
        }
        if (rank_add == 'K')
        {
            add_rank_search ++;
        }
    }
    cout << endl;
    add_card.set_rank(rank_add);
    
    deckOne.addOne(add_card);
    
    Deck copiedDeck(deckOne);
    
    cout << endl << "*** Original Deck Printout ***" << endl;
    cout << deckOne << endl <<endl;                                                                     // Prints the contents of "deckOne"
    
    cout << endl << "*** Copied Deck Printout ***" <<endl;
    cout << copiedDeck << endl << endl;                                                                 // Prints the contents of "copiedDeck"
    
    
    cout << "*** The program will compare the two decks to see if they are simular. ***" << endl;
    if (deckOne == copiedDeck)
    {
        cout << "The two decks have the same cards in them." << endl;
    }else{
        
        cout << "The two decks do not have the same cards in them." << endl;
    }

    int draw_amount_two = 0;                                                                            // Initializes the varible "draw_amount".
    while (draw_amount_two < 1 or draw_amount_two >= copiedDeck.getCount())                             // While loop that cycles through untill the user inputs a number
    {                                                                                                   // between the numbers 1 and 52.
        
        cout << endl << "How many cards would you like to remove from the copied deck? (1-" << copiedDeck.getCount() << "):  " << endl;
        
        cin >> draw_amount_two;                                                                         // Inserts the user inputed number into the variable "draw_amount".
    }
    
    cout << endl <<  "*** Cards Removed from the copied Deck ***" << endl;
    for (int i =1; i <= draw_amount_two; i++)                                                           // Loop that will run as many times as the user submitted for
    {                                                                                                   // the variable "draw_amount".
        card temporary_card_two;                                                                        // Creates a temporary card variable  that holds the removed card.
        temporary_card_two = copiedDeck.takeOne();                                                      // Sets the varible to the card removed from the deck with the
        cout << temporary_card_two <<endl;                                                              // "takeOne" method, then prints the temp card with the
    }
    cout << endl;
    
    cout << endl << "*** Original Deck Printout ***" << endl;
    cout << deckOne << endl <<endl;
    
    cout << endl << "*** Copied Deck Printout with Cards Removed ***" <<endl;
    cout << copiedDeck << endl << endl;
    
    cout << "*** The program will compare the two decks to see if they are simular. ***" << endl;
    if (deckOne == copiedDeck)
    {
        cout << "The two decks have the same cards in them." << endl;
    }else{
        
        cout << "The two decks do not have the same cards in them." << endl;
    }
    cout << endl;
    
    Deck MergedDeck;                                                                                     // Creates a new Deck varible named MergedDeck;
    MergedDeck = MergedDeck.merge(deckOne, copiedDeck);                                                  // Merges the "deckOne" and "copiedDeck"
    cout << "*** Merged Deck Printout ***" <<endl;
    cout << "The merged deck has " << MergedDeck.getCount() << endl; 
    cout << MergedDeck << endl;                                                                             // Prints out the mergedDeck.
    
    int Card_Value =0;
    Card_Value = MergedDeck.largest();
    
    cout << endl << endl <<"***The highest card in the deck is ranked : **" << endl;
    cout << Card_Value << " out of 52, where 52 is the Ace of Hearts!" << endl;
}