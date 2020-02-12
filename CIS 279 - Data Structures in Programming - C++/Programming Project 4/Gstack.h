#ifndef Programming_Project_4_Gstack_h
#define Programming_Project_4_Gstack_h

#include <iostream>
#include <stack>

using namespace std;

template <class T>
class GStack
{
private:
        stack<T> gstack_stack;
        string StackException = "Stack Exception Was Thrown";
public:
    bool isEmpty() const
    {
        if (gstack_stack.empty() == true)
        {
            return true;
        }else{
            return false;
        }
    }
    
    void push(const T& newItem)
    {
        gstack_stack.push(newItem);
        if (gstack_stack.top() != newItem)
        {
            throw (StackException);
        }
    };
    
    void pop()
    {
        if (gstack_stack.empty() == true)
        {
            throw (StackException);
        }else{
            gstack_stack.pop();
        }
    }
    
    void pop(T& stackTop)
    {
        if (gstack_stack.empty() == true)
        {
            throw (StackException);
        }else{
            stackTop = gstack_stack.top();
            gstack_stack.pop();
        }
        
    }
    void getTop(T& stackTop) const
    {
        if (gstack_stack.empty() == true)
        {
            throw (StackException);
        }else{
            stackTop = gstack_stack.top();
        }
    }
};




#endif
