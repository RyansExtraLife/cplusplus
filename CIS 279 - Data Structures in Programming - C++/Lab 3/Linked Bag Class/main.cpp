#include <iostream>
#include "node1.h"

using namespace std;


int main()
{
    cout << "R" << endl;
    
    node* head = NULL;
    head = new node( 78, head);
    head = new node( 36, head);
    head = new node( 22, head);
    head = new node( 78, head);
    head = new node( 66, head);
    head = new node( 78, head);
    head = new node( 22, head);
    head = new node( 78, head);
    
    size_t variable = list_occurance(head, 78);
    
    cout << "There are " << variable << "Number 78's " << endl;
}

