#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main()
{
    string user_inputed_string;
    cout << "Please enter a sentence, followed by the enter key: " << endl;
    getline(cin, user_inputed_string);
    
    int sentence_length = user_inputed_string.size();

    stack <char> regular_sentence;

    stack <char> reversed_sentence;
    
    for (int loop = 0; loop < sentence_length; loop++)
    {
        regular_sentence.push(user_inputed_string.at(loop));
    }
    
    while (!regular_sentence.empty())
    {
        
    }
    
    while (!reversed_sentence.empty())
    {
        cout << reversed_sentence.top();
        reversed_sentence.pop();
    }
 
}
