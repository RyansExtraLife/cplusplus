#ifndef __Programming_Project_3__RegList__
#define __Programming_Project_3__RegList__

#include <iostream>
#include "node1.h"
using namespace std;


class RegList
{
public:
    
    RegList(int capisity)                                                           // Constructor that will set the class capasity to the the int variable that is passed in.
    {
        class_capasity = capisity;                                                  // Sets the private variable to the vairable that was passed in. 
    }
    
    
    
    void  addStudent(int stuId);                                                  // Function that will be used to add a node containing a stuId field to the linked list.
    void  removeStudent(int  stuId);                                                // Function that will be used to remove a node containing a particular stuId.
    int removeFromFront();                                                          // Function that will remove the first node from a linked list and return the stuId.
    bool isEnrolled(int stuId)   const;                                             // Check to see if a stu ID is in the linked list.
    bool  isFull( ) const;                                                          // Checks the linked list to see if it matches the class capisty.
    bool  isEmpty( ) const;                                                         // Checks the linked list to see if it is empty.
    int   listSize( ) const;                                                        // Checks to see how many nodes are in the linked list.
    friend ostream& operator<<(ostream& out, const RegList& obj);                   // Out puts all of the data stored in a linked list.
    
private:
    int class_capasity;                                                             // Variable that will store the amount of nodes that can be on the linked list.
    node *head_ptr = NULL;                                                          // head_ptr that will be the beginning of the linked node list.
};




#endif