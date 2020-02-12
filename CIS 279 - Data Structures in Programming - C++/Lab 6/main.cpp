#include <iostream>
#include <vector>
#include <string>
#include <ctype.h>

using namespace std;

int main()
{

    string inserted_string;
    string capitialize_string;
    int how_how_many_strings =0;
    vector<string> words;
    
    cout << "How many words do you want to enter?: " << endl;
    cin >> how_how_many_strings;
    
    for (int i=1; i <= how_how_many_strings; i++)
    {
        
        cout << "Please enter word number "<< i << " : " <<endl;
        cin>> inserted_string;
        words.push_back(inserted_string);
        
    }
    cout << endl;
    for (vector<string>::iterator words_loop = words.begin(); words_loop !=words.end(); words_loop++)
    {
        string str_length = *words_loop;
        for (int i = 0; i < str_length.size(); i++)
        {
            str_length[i] = toupper(str_length[i]);
        }
        *words_loop = str_length;
        cout << *words_loop << endl ;
    }
    
}

