class MyStack {
    queue<int> q,q1;
    int Top;
public:
    MyStack() {
        
    }
    
    void push(int x) {
        q.push(x);
        Top=x;
    }

    int pop() {
        while(q.size()>1)
        {
            Top = q.front();
            q1.push(Top);
            q.pop();
        }
        int y = q.front();
        q.pop();
        swap(q,q1);
        return y;
    }
    
    int top() {
        return Top;
    }
    
    bool empty() {
        return q.empty();
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */