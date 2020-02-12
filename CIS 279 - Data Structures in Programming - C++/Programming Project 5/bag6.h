

#ifndef BAG6_H 
#define BAG6_H
#include <cstdlib>                                                                          // Provides NULL and size_t
#include "bintree.h"                                                                        // Provides binary_tree_node and related functions

namespace main_savitch_10
{
    template <class Item>
    
    class bag
    {
    private:
        binary_tree_node<Item> *root_ptr;                                                   // Root pointer of binary search tree
        
    public:
                                                                                            // TYPEDEFS
        typedef std::size_t size_type;                                                      // Typedef for size_type
        typedef Item value_type;                                                            // Typedef for value_type
        
                                                                                            // CONSTRUCTORS and DESTRUCTOR
        bag( )                                                                              // Empty Constructor
        {
            root_ptr = NULL;                                                                // Sets the root_ptr to NULL;
        }
        
        bag(const bag& source)                                                              // Copy Constructor that is used to make an
        {                                                                                   // identical bag to the passed in bag.
            root_ptr = tree_copy(source.root_ptr);
        }
        
        ~bag( ) {}                                                                          // Deconstructor
    
        binary_tree_node<Item> get_root ()
        {
            return *root_ptr;
        }
                                                                                            // MODIFICATION functions
        
        size_type erase_all(const Item& target)                                             // Function that will search a binary search tree for a variable and remove all instances of it.
        {
            bool loop = false;                                                              // Creates a loop that will cycle through untill no instances of the variable are found.
            size_type count = 0;                                                            // Variable that will store the amount of items that were removed from the tree.
            while (loop != true)                                                            // While loop that will cycle throuch untill the variables have all been removed.
            {
                if (erase_one(target) == true)                                              // If the erase one funciton returns treu it increases the count of items removed by one and
                {                                                                           // the loop will cycle thorugh again.
                    count = count + 1;
                }else{
                    loop = true;                                                            // If all instances of the variable have been found the it triggers the else statment that will
                }                                                                           // in turn set the while loop to true.
            }
            return count;                                                                   // Once the while loop has been broken the funciton will return the amount of items that were removed.
        }
        
        bool erase_one(const Item& target)                                                  // Boolean function that erases one variable of a passed in value.
        {
            binary_tree_node<Item> *temp_root_ptr;                                          // Creates a temp_root_ptr that will hold the postion of the root pointer in the binary_search_tree

            if (root_ptr == NULL)                                                           // If statment that checks to see if the binary search tree is empty.
                {
                    return false;                                                           // If the tree is empty (root_ptr == NULL) then false is returned.
                }
            
            else if (target < root_ptr->data())                                               // Else if Statment that checks to see if the passed in variable is smaller then the data in the current node.
                {                                                                           // If the statment is true then the function recursivly calls itself to the rleft of the variable.
                    root_ptr = root_ptr->left();
                    erase_one(target);
                }
            
            else if (target > root_ptr->data())                                               // Else if Statment that checks to see if the passed in variable is larger then the data in the current node.
                {                                                                           // If the statement is true then the function recursivly calls itself to the right of the variable.
                    root_ptr = root_ptr->right();
                    erase_one(target);
                }
            if (root_ptr->left( ) == NULL)                                                  // If statement that checks to see if the left sub tree is empty. If the left subtree is equal to NULL
            {                                                                               // the right variable can be used to outright replace the value of the NODE.
                temp_root_ptr = root_ptr;                                                   // Sets the temp pointer to the location of the root pointer.
                root_ptr = root_ptr->right( );                                              // Sets the root pointer equal to the variable in the right sub tree.
                delete temp_root_ptr;                                                       // Deletes the temp root poitner and the node that is attached to it.
                return true;                                                                // Variable has been removed so the boolean expression returns true.
            }
            remove_highest(root_ptr->left( ), root_ptr->data( ));
            return true;
        }
        
        void remove_highest(binary_tree_node<Item>* root_ptr, Item& replace)                 // Support function used to replace nodes with the appropriate number that needs to be replaced.
        {
            binary_tree_node<Item>* temp_root_ptr;                                           // Creates a temp pointer variable that will be used to delete a instance.
            
            if (root_ptr->right() == NULL)                                                     // If statement that will replace the variable that has been deleted with the number right before the NULL statement
            {
                replace = root_ptr->data();                                                    // Sets the passed in replace variable with the data that was passed into th function.
                temp_root_ptr = root_ptr;                                                    // Sets the temp pointer the the loction of the root pointer.
                root_ptr = root_ptr->left();                                                   // Moves the root_ptr down to the left.
                delete temp_root_ptr;                                                        // Deletes the temp pointer and the node attached to it is removed.
            }else{                                                                           // Else statement that recursivly calls the remove_highest function untill a NULL value is found.
                remove_highest(root_ptr->right(), replace);
            }
        }

        void insert(const Item& entry)
        {
            bool loop = false;                                                              // Creats a boolean variable and sets it to false. 
            binary_tree_node<Item> *temp_ptr = root_ptr;                                    // Creates a temp pointer that is equal to the root pointer of the function that called it.
            
            
            if (root_ptr == NULL)                                                           // If statment that checks to see if the root_ptr in the bag is
                {                                                                           // set to NULL, if it is creates a new node with the variable.
                    root_ptr = new binary_tree_node<Item>(entry, NULL, NULL);               // Sets the root_ptr to the new Binary Tree Node.
                    return;                                                                 // Ends the function.
                }else{

                    while (loop != true)                                                            // While the loop is not equal to true it will cycle through.
                    {
                        if (temp_ptr->data() >= entry)                                                // If statement that checks to see if the value of the first node
                        {                                                                           // is greater then or equal to the passed in value.
                            if (temp_ptr->right() == NULL)                                            // If the value is greater it will go right on the tree.
                            {                                                                       // If statement that checks to see if the value of the node is set
                                temp_ptr->right() = new binary_tree_node<Item>(entry, NULL, NULL);    // to NULL if it is, it creates a new Binary Tree Node and sets
                                loop = true;                                                        // the pointer to the node as well as break the while loop.
                            }else{
                                temp_ptr = temp_ptr->right();                                         // If the statement is not true then it moves the pointer to the right
                            }                                                                       // down the Binary Tree and the loop will force it to check the value again.
                        }else{
                                                                                            // Else statment that will trigger if the value of the first node is
                            if (temp_ptr->left() == NULL)                                             // less then then the present node.
                            {                                                                       // If statement that checks to see if the value of the node is set
                                temp_ptr->left() = new binary_tree_node<Item>(entry, NULL, NULL);     // to NULL if it is, it creates a new Binary Tree Node and sets
                                loop = true;                                                        // the pointer to the node as well as break the while loop.
                        
                            }else{
                                temp_ptr = temp_ptr->left();                                          // If the statement is not true then it moves the pointer to the left
                            }                                                             // down the Binary Tree and the loop will force it to check the value again.
                        }
                    }
                }
        }
        
        void operator +=(const bag& addend)                                                 // Operator that will add all of the the contents from the passed in tree
        {                                                                                   // into the tree that calls it.
            if (root_ptr == addend.root_ptr)                                                // If statement that checks the root pointer to see if the oringal bags
                {                                                                           // root pointer and the passed in is the same.
                    bag<Item> copy = addend;                                                // If they are it makes an object that will hold all of the variables from
                    //insert_all(copy.root_ptr);                                              // the passed in addend object. Then it uses the insert all command to
                }else{                                                                      // insert all of the objects variables into the 
                    //insert_all(addend.root_ptr);                                            // If the else statment is triggerd it will skip the bag copy and procced
                }                                                                           // to insert all of the variables into the called object.
        }
        
        void operator =(const bag& source)                                                  // Operator that will make two bags equal to each other
        {
            if (root_ptr == source.root_ptr)                                                // If statement that checks to see if the two bags are equal to each other
            {                                                                               // already, if they have the same root poitner then it will end the funciton.
                return;
            }else{
            tree_clear(root_ptr);                                                           // If the else statment is trigger it will call the tree clear function from
            root_ptr = tree_copy(source.root_ptr);                                          // bintree.h to the root pointer in the oringal bag and clear it.
            }                                                                               // It then uses the tree copy function from bintree.h and copies the root
        }                                                                                   // pointer and contents into the current tree.
        
                                                                                            // CONSTANT functions
        size_type size( ) const                                                             // Funciton that will return the total amount of variables in the bag class
        {
            return tree_size(root_ptr);                                                     // Calls the tree size function from the bintree.h function and returns the
        }                                                                                   // number that it itself returns.
        
        size_type count(const Item& target) const                                           // Function that will return the number of times a variable is present in the binary search tree.
        {
            size_type total_count = 0;                                                      // Variable that will store the amount of times an object appears in the binary search tree.
            binary_tree_node<Item> *temp_ptr;                                               // Creates a variable that will search through the binary search tree.
            
            temp_ptr = root_ptr;                                                            // Sets the temp_ptr to the root_ptr of the tree that will be searched.
            
            
            while (temp_ptr != NULL)                                                        // While loop that will cycle through untill the temp_pointer finds a NULL and can no longer traverse.
                if (target < temp_ptr->data())                                                // IF statement that will move the pointer to the left if the variable is less then the data in the current node.
                {
                    temp_ptr = temp_ptr->left();                                              // Moves the temp pointer to the left one Node
                }
                else if ( target > temp_ptr->data())                                          // ELSE IF statement that will move the pointer to the right if the variable is more then the data in the current node
                {
                    temp_ptr = temp_ptr->right();                                             // Moves the temp pointer to the right one Node
                }else{                                                                      // Else statement that triggers if the target variable
                    total_count ++;                                                         // Increases the total_count by one.
                    temp_ptr = temp_ptr->left();                                              // Moves the temp pointer to the left side of the three.
                }
            return total_count;                                                             // Returns the variable of how many times an object appeared in the tree.
        }
        
        
    };
                                                                                            // NONMEMBER functions for the bag<Item> template class
    
    template <class Item>
    bag<Item> operator +(const bag<Item>& bag1, const bag<Item>& bag2)                      // A function that is used to add two bags together anc create a third
    {                                                                                       // bag with the contents of both the previous bags.
        bag<Item> combonation = bag1;                                                       // Creates a new bag and sets it equal to the first passed in bag.
        combonation += bag2;                                                                // Uses the += operator to add the contents of the second bag into the
        return combonation;                                                                 // contents of the third bag and then returns the third bag object.
    }
    
    template <class Item>
    void insert_all(binary_tree_node<Item>* root_ptr)                                       // function that will add the contents of two bags to each other.
    {                                                                                       // This function is used in the += operator wich is then further used in
                                                                                            // the + operator.
        if (root_ptr != NULL)                                                               // If statement that checks to see if the root pointer is set to NULL.
        {                                                                                   // if it is not it calls the insert method for the current node to add
                                                                                            // the current data to the bag object that called it.
            // insert(root_ptr->data( ));
            // insert_all(root_ptr->left( ));                                                  // Function that calls itself recursivly to the left.
           // insert_all(root_ptr->right( ));                                                 // Function that calls itself recursivly to the right.
        }
    }
    
    template <class Item>
    void print_all(binary_tree_node<Item>* root_ptr)
    {
        if (root_ptr != NULL)
        {
            
            cout << root_ptr->data( ) << " " << endl;
            print_all(root_ptr->left());
            rint_all(root_ptr->right());
        }
    }
    
};






#endif
