class MyQueue {
public:
    int q[101];
    int f, b;
    MyQueue() 
    {
        
        f = 0;
        b = 0;
    }
    
    void push(int x) 
    {
        q[b] = x;
        b++;
        
    }
    
    int pop() 
    {
        int v = q[f];
        f++;
        return v;
        
    }
    
    int peek() 
    {
        return q[f];        
    }
    
    bool empty() 
    {
        return f == b;        
    }
};

auto init = []() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 'c';
}();
/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */