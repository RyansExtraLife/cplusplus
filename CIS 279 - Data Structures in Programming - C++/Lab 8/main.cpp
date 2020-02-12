#include <iostream>
#include "bintree.h"

using namespace std;

void changeTree (binary_tree_node<int> *ptr, int change_Value )
{
    if (ptr != NULL)
    {
        changeTree(ptr->left(), change_Value);
        changeTree(ptr->right(), change_Value);
        ptr->set_data(change_Value);
    }
}

void printTree (binary_tree_node<int> *ptr)
{
    if (ptr != NULL)
    {
        printTree (ptr->right());
        printTree(ptr->left());
        cout << ptr->data() << endl;
    }
}


int main()
{
    binary_tree_node<int>* rootPtr = NULL;
    rootPtr = new binary_tree_node<int>(4);
    rootPtr->set_left(new binary_tree_node<int>(32));
    rootPtr->set_right(new binary_tree_node<int>(18));
    rootPtr->left()->set_left(new binary_tree_node<int>(22));
    
    printTree(rootPtr);
    
    changeTree(rootPtr, 99);
    
    printTree(rootPtr); 

}

