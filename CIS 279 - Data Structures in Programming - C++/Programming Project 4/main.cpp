#include <iostream>


#include "Gstack.h"
#include "Gqueue.h"

#include "stack"
#include "queue"

using namespace std;

int main()
{
    GQueue <char> gqueue1;
    GQueue <char> gqueue2;

    GStack<int> gstack1;
    GStack<int> gstack2;
    
    string input_stack1;
    string input_stack2;
    
    GStack<int> sum_stack;
    
    cout << "Please enter the first number: " << endl;
    cin >> input_stack1;
    double string_input_stack1_length = input_stack1.size();
    
    cout << "Please enter the second number: " << endl;
    cin >> input_stack2;
    double string_input_stack2_length = input_stack1.size();
    
    for (int i =0; i <= string_input_stack1_length; i ++)
    {
        char temp_char1 = input_stack1[i];
        gqueue1.push(temp_char1);
    }
    
    for (int i =0; i <= string_input_stack2_length; i++)
    {
        char temp_char2 = input_stack2[i];
        gqueue2.push(temp_char2);
    }
    
    for (int i =1; i <= string_input_stack1_length; i ++)
    {
        char temp_char;
        gqueue1.getTop(temp_char);
        gqueue1.pop();
        int temp_int = temp_char - '0';
        gstack1.push(temp_int);
    }
    
    for (int i =1; i <= string_input_stack1_length; i ++)
    {
        char temp_char;
        gqueue2.getTop(temp_char);
        gqueue2.pop();
        int temp_int = temp_char - '0';
        gstack2.push(temp_int);
    }
    
    int column_result =0;
    
    while ( gstack1.isEmpty() != true or gstack2.isEmpty() != true)
    {
        int temp_stack1 = 0;
        int temp_stack2 = 0;
        
        if (gstack1.isEmpty() != true)
        {
            
            gstack1.pop(temp_stack1);
        }
        
        if (gstack2.isEmpty() != true)
        {
            
            gstack2.pop(temp_stack2);
        }
        
        column_result += temp_stack1 + temp_stack2;
        
        sum_stack.push(column_result);
        
        if (column_result > 9)
        {
            column_result =  column_result / 10;
        }else{
            column_result = 0;
        }
    }
    
    if (column_result != 0)
    {
        sum_stack.push(column_result);
    }
    
    cout << endl << "The addition of the two numbers is: " << endl;
    while (sum_stack.isEmpty() != true)
    {
        int sum_stack_top;
        sum_stack.getTop(sum_stack_top);
        cout << sum_stack_top;
        sum_stack.pop();
    }


}
    
    

