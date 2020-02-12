#ifndef Programming_Project_4_Gqueue_h
#define Programming_Project_4_Gqueue_h

#include <iostream>
#include <queue>

using namespace std;

template <class T>
class GQueue
{
private:
    queue<T> gqueue_queue;
    string QueueException = "Queue Exception was Thrown";
    
public:
    bool isEmpty() const
    {
        if(gqueue_queue.empty() == true)
        {
            return true;
        }else{
            return false;
        }
    }
    
    void push(const T& newItem)
    {
        gqueue_queue.push(newItem);
    }
    
    T pop()
    {
        if (gqueue_queue.empty() == false)
        {
            T temp_variable;
            temp_variable = gqueue_queue.front();
            gqueue_queue.pop();
            return temp_variable;
        }else{
            throw (QueueException);
        }
    }
    
    void getTop(T& queueFront) const
    {
        if (gqueue_queue.empty() == false)
        {
            queueFront = gqueue_queue.front();
        }else{
            throw (QueueException);
        }
    }
};


#endif
