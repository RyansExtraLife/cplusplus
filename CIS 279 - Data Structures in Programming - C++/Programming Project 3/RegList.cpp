#include "RegList.h"


void RegList::addStudent(int stuId)                                                           // Function that will add a node to the Reglist containging a stuID number.
{
    if (list_length(head_ptr) == 0)                                                           // If the list is empty it the statent will add a node to the fornt of the list.
    {
        list_head_insert(head_ptr, stuId);
    }else{                                                                                    // If the list is not empty it will add a node to the end of the list.
        list_tail_insert(head_ptr, stuId);
    }
}

void RegList::removeStudent(int  stuId)                                                        // Function that will remove a node from a linked list if it is there.
{
    if (isThere(head_ptr, stuId) == true)                                                      // The function will check to see if the variable exists in the linked list.
    {
        item_remove(head_ptr, stuId);                                                          // If the stuId is in the linked list it will be removed.
    }else{
        cout << "The student is not in this list. " << endl;                          // If the stuId is not in the linked list will output a message.
    }
}

int RegList::removeFromFront()
{
    int front_Id = 000000;                                                            // Creates a variable called front ID which will contains
    node *ptr = head_ptr->link();                                                     // Creates a node pointer that points the the first node in the linked list.
    front_Id = ptr->data();                                                           // Sets the front_Id variable to the data field that the ptr variable is pointing to
    list_head_remove(head_ptr);                                                       // Calls the list head remove function to remove the front node.
    return front_Id;                                                                  // returns the front_Id number to the calling. 
}


bool RegList::isEnrolled(int stuId) const                                              // Function that will return a boolean answer dependent on if a stuId is in the linked list.
{
    if (isThere(head_ptr, stuId) == true)                                              // If statement that will check to see if the stuID is present in the linked list.
    {
        return true;                                                                   // If the variable is found the statement will return true.
    }else{
        return false;                                                                  // If the variable is not found the statement will return false.
    }
}

bool RegList::isFull( )  const                                                         // Function that will return a boolean answer dependent on if the linked list is full.
{
    if (list_length(head_ptr) == class_capasity)                                       // Checks to see if the list length is equal to the capasity of the RegList.
    {
        return true;                                                                   // If the list length matches the capisity size it returns true.
    }else{
        return false;                                                                  // If the list length is less then the capisity size it returns false.
    }
}

bool RegList::isEmpty( )   const                                                       // Function that will return a boolean answer dependent on if the linked list is empty.
{
    if (list_length(head_ptr) == 0)                                                    // Checks to see if the list length is equal to zero.
    {
       return true;                                                                    // If the list length is zero it will return true.
    }else{
        return false;                                                                  // If the list length is not zero it will retun false.
    }
}

int RegList::listSize( )   const                                                       // Function that is designed to return the amount of nodes in the Reglist
{
    int list_size;                                                                     // Initizlise a int variable called list_size;
    list_size = list_length(head_ptr);                                                 // Sets the variable list_size to the function list_length from the node class.
    return list_size;                                                                  // Returns the varible list_size.
}



ostream& operator<<(ostream& out, const RegList& obj)
{
    outList(obj.head_ptr, out);
    return out;
}
