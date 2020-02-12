#ifndef __Programming_Project_6__Heap__
#define __Programming_Project_6__Heap__

#include <iostream>

class FullPQ{};                                                     // Class definition for Empty Priority Queue
class EmptyPQ{};                                                    // Class definition for Empty Priority Queue

using namespace std;                                                // Using the standard namespace.

template<class T>                                                   // Establishing template class T
class Heap                                                          // Definition of class Heap
{
private:
    int length;                                                     // Number of values currently stored in this heap.
    T* items;                                                       // Dynamic array to store heap data.
    int maxItems;                                                   // The Maximum capacity of this heap.
public:
    Heap(int);                                                      // Parameterized class constructor
    ~Heap();                                                        // Heap Class Destructor
    Heap(const Heap<T>& obj);                                       // Copy constructor for this class
    Heap<T>& operator=(const Heap<T>& obj);                         // Assignment overload
    bool IsEmpty() const;                                           // Boolean Function that checks to see if the class is empty.
    bool IsFull() const;                                            // Boolean Function that checks to see if the class if full.
    void add(T newItem);                                            // Function that adds newItem to the heap, if the heap is full and FULLPQ Excpetion is thrown.
    void remove(T& item);                                           // Function that removes the root from this heap, if the heap is empty a EMPTYPQ is thrown.
};

template<class T>                                                   // Template Class
Heap<T>::Heap(int max)                                              // Construtor for the Heap class that takes in a variable.
{                                                                   // The passed in variable is set to the maxItems variable.
    maxItems = max;                                                 // Then an array is created with its size set to the MaxItems variable.
    items = new T[max];                                             // Because the array is empty the length is set to 0 by default.
    length = 0;
}

template<class T>                                                   // Template Class
Heap<T>::~Heap()                                                    // Deconstructor for the Heap class.
{                                                                   // Deletes all of the items within the heap class.
    delete [] items;
}

template<class T>                                                   // Template Class
Heap<T>::Heap(const Heap<T>& Heap_Obj)                              // Copy Construtor for the Heap class that takes in a class.
{
    maxItems = Heap_Obj.maxItems;                                   // Sets the maxItems Variable to the passed in objects passed in maxItems variable.
    items = new T[Heap_Obj.maxItems];                               // The objects passed in maxItem Variable is set to the template Ts Array Size.
    for (int i =0; i < maxItems; i++)                               // for loop that copies the variables from the passed in objects template array into
    {                                                               // the template array  of the newly constructed array.
        items[i] = Heap_Obj.items[i];
    }
    length = Heap_Obj.length;}                                      // Sets the Lenght varible to the passed in objects length variable.

template<class T>                                                   // Template Class
Heap<T>& Heap<T>::operator= (const Heap<T>& obj)                    // Operator Overoad that sets the first object equal to the second passed in object.
{                                                                   // For Loop that cycles through each member of the passed in objects array and sets
    for (int i = 0; i < obj.maxItems; i++)                          // it equal to the first objects same position in the array.
    {
        items[i] = obj.items[i];
    }
}

template<class T>                                                   // Template Class
void Heap<T>::remove (T& item)                                      // Function that removes the highest priority item from the array.
{                                                                   // A copy of the item is returned.
    if (length == 0)                                                // if/else statement that checks to see if the variable length is set to 0.
    {                                                               // If the statement length is 0 the class EmptyPQ is thrown.
       // throw EmptyPQ;                                            // If the else statement is triggerd the function searches for the highest
    }else{                                                          // priority item in the array and removes it.
        length--;
        T Bubble_Val = items[length];
        int Bubble = 0;
        int left_branch = 1;
        int right_branch = left_branch +1;
        while(( left < length && Bubble_Val > items[left]) ||
              ( right < length && Bubble_Val > items[right] ))
        {
            int smallerChild = left_branch;
            if (right < length && items[right_branch]<items[left_branch] )
                {
                    smallerChild = right_branch;
                }
            items[Bubble] = items[smallerChild];
            Bubble = smallerChild;
            left_branch = 2*smallerChild+1;
            right_branch = left_branch+1;
        }
        items[Bubble] = Bubble_Val;
    }
}

template<class T>                                                   // Template Class
void Heap<T>::add(T newItem)                                        // Function that adds a new item to the heap array.
{
    if (length == maxItems)                                         // if/else statement that checks to see if the length is equivilant to the MaxItems variable
    {                                                               // If the two variables are equivlent the class FullPQ is thrown.
      //  throw FullPQ;
    }else{
        int bubble = length;                                        // Creates a variable named bubble and sets it to the length of the array.
        int parent = (bubble-1)/2;                                  // Creates a variable named parent that is equal to the position of the bubble minus one position to
        while( bubble > 0 && newItem < items[parent] )              // alighn it with the array and then divides it by two.
        {                                                           // while loop that will switch the leaf with the parent untill the tree is in order.
            items[bubble] = items[parent];                          // Switches the position of the bubble variable with the parent variable.
            bubble = parent;                                        // Sets the bubble variable equal to the old parent variable.
            parent = (bubble-1)/2;                                  // The function then sets the parent variable to the parent of the bubble that was recently modifyed
        }                                                           // bubble variable. 
        items[bubble] = newItem;                                    // Once the tree is in order it will set the last leaf to the item that was passed in to the function.
        length ++;                                                  // Adds one value to the length variable.
    }
}

template<class T>                                                   // Template Class
bool Heap<T>::IsFull() const                                        // Boolean Function that checks to see if the class if full.
{                                                                   // if/else statment that checks to see if the length variable is equal the maxItems variable.
    if (length != maxItems)                                         // If the length variable is not equal to the max items variable then the function will return true.
    {                                                               // If the function does not return false then it will return true.
        return false;
    }else{
        return true;
    }
}

template<class T>                                                   // Template Class
bool Heap<T>::IsEmpty() const                                       // Boolean Function that checks to see if the class is empty.
{                                                                   // if/esle statement that checks to see if  the length variable is equal to 0.
    if (length != 0)                                                // If the length variable is not 0 then the function will return false.
    {                                                               // If the funciotn does not return false then it will return true.
        return false;
    }else{
        return true;
    }
}
#endif /* defined(__Programming_Project_6__Heap__) */
