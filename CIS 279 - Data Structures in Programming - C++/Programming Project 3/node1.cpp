#include "node1.h"

#include "node1.h"              // Includes Node1.h
#include <cassert>              // Provides assert.
#include <cstdlib>              // Provides NULL and size_t.
using namespace std;            // Uses standard namespace.


size_t list_length(const node* head_ptr)                                 // Function that returns the number of nodes in the current list.
{                                                                        // Library facilities used: cstdlib
	const node *cursor;                                                  // Creates a node pointer called cursor.
	size_t answer;                                                       // Creates a variable of size "size_t" that stores the amount of nodes in the list.
	answer = 0;                                                          // Sets the variable answer to zero.
    
	for (cursor = head_ptr; cursor != NULL; cursor = cursor->link( ))    // for loop that cycles through each of the nodes on thist untill the pointer is equal to NULL
        {
            ++answer;                                                    // Each time the loop passes through a node it adds one to variable answer.
        }
	return answer;                                                       // Returns the number of nodes that exist in the node list.
}

void list_head_insert(node*& head_ptr, const node::value_type& entry)    // Function that insersts a new node at the front of the node list.
{
	head_ptr = new node(entry, head_ptr);                                // Creates a new node that is inserted at the front of the list.
}

void list_tail_insert(node*& head_ptr, const node::value_type& entry)     // Function that inserts a new node at the end of the nodes list.
{
    node *cursor = head_ptr;                                              // Creates a node pointer called cursor that is equal to the passed in head_ptr.
    node *insert_ptr = new node(entry, NULL);

    while(cursor->link() != NULL)                                                 // while loop that will cycle thorugh the node list until the pointer is equal to Null.
    {
        cursor = cursor->link();                                          // During each cycle  of the while loop moves the cursor to the next node address in the list.
    }
    
    cursor->set_link(insert_ptr);                                         // Sets the address of the last pointer to the address of a newly created node.
                                                                          // The new nodes data is set to the value passed in to the function.
                                                                          // The new nodes address poienter is set to NULL.
}

void list_insert(node* previous_ptr, const node::value_type& entry)       // Function that sets a node to the middle of a function.
{                                                                         // Library facilities used: cstdlib
	node *insert_ptr;                                                     // Creates a node pointer called "Insert_ptr".
	insert_ptr = new node(entry, previous_ptr->link( ));                  // The insert_ptr is equal to the adderss of a new node that has the value of
                                                                          // the entry passed in and the address of the previous_ptr.
	previous_ptr->set_link(insert_ptr);                                   // Sets the previous_ptrs address equal to the address of the inserted pointer.
}

void item_remove(node*& head_ptr, const node::value_type& entry)
{
    node *cursor1 = head_ptr;                                              // Creates a node pointer called cursor that is equal to the passed in head_ptr.
    node *cursor2 = cursor1->link();
    
    while (cursor1->link() != NULL)                                                // while loop that cycles through the node list untill the ptr is equal to NULL.
    {
        if (cursor2->data() ==  entry)                                     // if statement that will trigger if the data entry that was passed in matches the data in the node.
        {
            cursor2->link();                                               // Moves the cursor2 pointer forward one space.
            cursor2->set_link(cursor1);                                    // Sets the link of Cursor2 to the address of cursor1.
            cursor1 = cursor1->link();                                     // Moves the cursor1 pointer forward one space.
            
        }else{                                                             // If the value was not found the esle statement is triggered.
            cursor2 = cursor2->link();                                     // Moves the cursor2 pointer forward one space.
            cursor1 = cursor1->link();                                     // Moves the cursor1 pointer forward one space.
        }
    }
}

void outList(node* head_Ptr, ostream& out)                                  // Cycles through each of the nodes in the linked list and prints each node.
{
    node *cursor = head_Ptr;                                                // Creates a node pointer called cursor that is equal to head_Ptr.
    while (cursor != NULL)                                                  // while loop that will cycle through each node untill it finds a NULL value.
    {
        out << "Student ID: "<< cursor->data() << endl;                     // Prints out he contents of hte current data variable in the linked list.
        cursor =  cursor->link();                                           // Moves the cursor pointer forward one space.
    }
}

bool isThere (node* headPtr, const node::value_type& entry)                 // Cycles through each node and verifys if the node exists.
{
    node *cursor = headPtr;                                                 // Creates a node pointer that is equal to "headPtr".
    while (cursor != NULL)                                                  // while loop that will cycle thorugh each node untill it finds a NULL value.
    {
        if (entry == cursor->data())                                        // if statement that will break if the data passed in is equal to a data field in a node.
        {
            return true;                                                    // returns the value of true if the if statement crietera were met.
        }
    }
    return false;                                                           // If the while loop does not find a matching node the function will return false.
}

node* list_search(node* head_ptr, const node::value_type& target)
{
	node *cursor;                                                            // Creates a node pointer called "cursor".
	for(cursor = head_ptr; cursor != NULL; cursor = cursor->link( ))         // for loop that will cycle through all of the nodes until the ptr is equal to NULL.
    {
	    if(target == cursor->data( ))                                        // if break statement that will break if the data passed in is equal to the data of a node.
        {
            return cursor;                                                   // if the data is matched the statment will return the address of the node.
        }
    }
	return NULL;                                                             // If the node loop does not find the variable it will return NULL address.
}

const node* list_search(const node* head_ptr, const node::value_type& target)   // Library facilities used: cstdlib
{
	const node *cursor;                                                         // Creates a node pointer called "cursor".
    
	for (cursor = head_ptr; cursor != NULL; cursor = cursor->link( ))           // for loop that will cycle thorugh all of the nodes until the ptr is equal to NULL.
    {
	    if (target == cursor->data( ))                                          // if break statement that will break if the data pased in is equal to the data of a node.
        {
            return cursor;                                                      // if the data is matched the statment will retun the address of the node.
        }
    }
	return NULL;                                                                // If the node loop does not find the variable it will return NULL address.
}

node* list_locate(node* head_ptr, size_t position)                            // Locates the address of 
{                                                                             // Library facilities used: cassert, cstdlib
	node *cursor;
	size_t i;
    
	assert (0 < position);
	cursor = head_ptr;
	for (i = 1; (i < position) && (cursor != NULL); i++)
    {
	    cursor = cursor->link( );
    }
	return cursor;
}

const node* list_locate(const node* head_ptr, size_t position)              // 
{                                                                           // Library facilities used: cassert, cstdlib
	const node *cursor;
	size_t i;
    
	assert (0 < position);
	cursor = head_ptr;
	for (i = 1; (i < position) && (cursor != NULL); i++)
    {
	    cursor = cursor->link( );
    }
	return cursor;
}

void list_head_remove(node*& head_ptr)
{
	node *remove_ptr;
    
	remove_ptr = head_ptr;
	head_ptr = head_ptr->link( );
	delete remove_ptr;
}

void list_remove(node* previous_ptr)
{
	node *remove_ptr;
    
	remove_ptr = previous_ptr->link( );
	previous_ptr->set_link( remove_ptr->link( ) );
	delete remove_ptr;
}

void list_clear(node*& head_ptr)                                                      // Library facilities used: cstdlib
{
	while (head_ptr != NULL)
    {
	    list_head_remove(head_ptr);
    }
}

void list_copy(const node* source_ptr, node*& head_ptr, node*& tail_ptr)              // Library facilities used: cstdlib
{
	head_ptr = NULL;                                                                  // Sets varible head_ptr equal to NULL.
	tail_ptr = NULL;                                                                  // Sets varible tail_ptr equal to NULL.
    
	if (source_ptr == NULL)                                                           // Handle the case of the empty list.
    {
     return;
    }
    
	// Make the head node for the newly created list, and put data in it.
	list_head_insert(head_ptr, source_ptr->data( ));
	tail_ptr = head_ptr;
    
	// Copy the rest of the nodes one at a time, adding at the tail of new list.
	source_ptr = source_ptr->link( );
	while (source_ptr != NULL)
	{
	    list_insert(tail_ptr, source_ptr->data( ));
	    tail_ptr = tail_ptr->link( );
	    source_ptr = source_ptr->link( );
	}
}

