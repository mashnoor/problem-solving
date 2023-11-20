#include <bits/stdc++.h>
using namespace std;
class MinStack {
    struct node
    {
        int val;
        int min;
        node* next = NULL;
        node* prev = NULL;
    } *last;

    bool first_node = true;
    
    public:
        MinStack() 
        {
                        
        }
        
        void push(int val)
        {
            if(first_node)
            {
                last = new node();
                last->val = val;
                last->min = val;
                first_node = false;
            }
            else
            {
                node* nn = new node();
                nn->val = val;
                if(last->min > val) nn->min = val;
                else nn->min = last->min;

                last->next = nn;
                nn->prev = last;
                last = nn;
            }        
        }
        
        void pop()
        {
            if(last->prev == NULL && last->next == NULL)
            {
                last = NULL;
                first_node = true;
            }
            else
            {
                node* prev_last = last->prev;
                last = prev_last;
                last->next = NULL;

            }
                   
        }
        
        int top() 
        {
            
            return last->val;            
        }
        
        int getMin() 
        {
            return last->min;
            
        }
};


int main()
{
     MinStack* obj = new MinStack();
     obj->push(2147483646);
     obj->push(2147483646);
     obj->push(2147483647);
     cout<<obj->top()<<endl;
     obj->pop();
     obj->getMin();
     obj->pop();
    obj->getMin();
    obj->pop();
    obj->push(2147483647);
    obj->pop();
    obj->push(-2147483648);




    return 0;
}