#ifndef __Programming_Project_2__Deck__
#define __Programming_Project_2__Deck__

#include <iostream>
#include "Card.h"

using namespace std;

class Deck {
private:
    card deck_array[52];
    int how_many_cards = 52;
    
public:
    
    Deck();
    Deck(const Deck&  obj);
    void cut();
    void shuffle();
    card takeOne();
    void addOne(const card&  obj);
    int getCount() const;
    bool contains(const card& obj) const;
    bool isEmpty() const;
    int largest() const;
    
    bool operator==(const Deck& obj) const;
    static Deck merge(const Deck& obj1, const Deck& obj2);
    friend ostream& operator<<(ostream& out, const Deck& obj);
};

#endif /* defined(__Programming_Project_2__Deck__) */
