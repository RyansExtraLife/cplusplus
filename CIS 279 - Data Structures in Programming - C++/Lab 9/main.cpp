#include <iostream>
#include "bintree.h"

using namespace std;

void traverse (binary_tree_node<int> *root)
{
    if (root == NULL)
    {
		return;
    }else{
		traverse (root->left());
        cout << root->data() << endl;
        traverse (root->right());
	}
}

void insert(binary_tree_node<int> * &ptr, const int& value)
{
    bool done = false;
    
    if (ptr == NULL)
    {
        ptr = new binary_tree_node<int>(value);
        done = true;
    }
    binary_tree_node<int>* temp = ptr;
    
    while (done == false)
    {
        if (temp->data() >= value)
        {
            if (temp->left() == NULL)
            {
                temp->set_left(new binary_tree_node<int>(value));
                done = true;
            }else{
                temp = temp->left();
            }
        }
        else if ( temp->data() < value)
        {
            if (temp->right() == NULL)
            {
                temp->set_right(new binary_tree_node<int>(value));
                done = true;
            }else{
                temp = temp->right();
            }
        }
        
    }
}


int main()
{
    binary_tree_node<int>* root  = NULL;
    insert(root, 5);
    insert(root, 27);
    insert(root, 86);
    insert(root, 99);
    insert(root, 12);
    insert(root, 19);
    insert(root, 42);
    insert(root, 12);
    cout << "***  Print Tree  ***" << endl;
    traverse(root);
    
}

