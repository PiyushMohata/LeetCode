class FreqStack {
    unordered_map<int,int>m;
    vector<vector<int>>v;
public:
    FreqStack() {
        
    }
    
    void push(int val) {
        m[val]++;
        if(v.size()>=m[val])
            v[m[val]-1].push_back(val);
        else
            v.push_back({val});
    }
    
    int pop() {
        int val=v.back().back();
        v.back().pop_back();
        if(v.back().size()==0)
            v.pop_back();
        m[val]--;
        return val;
    }
};

/**
 * Your FreqStack object will be instantiated and called as such:
 * FreqStack* obj = new FreqStack();
 * obj->push(val);
 * int param_2 = obj->pop();
 */