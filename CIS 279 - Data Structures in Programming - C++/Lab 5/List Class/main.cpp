#include <iostream>
#include <list>

using namespace std;

int main()
{
    list<string> names;
    names.push_front("Ryan");
    names.push_back("Alyssa");
    names.push_back("Jonathon");
    names.push_back("Kevin");
    names.push_back("Jeff");

    for (list<string>::iterator names_loop = names.end(); names_loop !=names.begin(); --names_loop)
    {
        cout << *names_loop << ' ' ;
    }
    
    cout << endl;

    cout << endl;

    

    
}

