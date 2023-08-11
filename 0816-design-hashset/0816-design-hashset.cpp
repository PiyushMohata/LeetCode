class MyHashSet {
    vector<int>v;
public:
    MyHashSet() {
        v.clear();
    }
    
    void add(int key) {
        int flag=0;
        for(int i=0; i<v.size(); i++)
        {
            if(v[i]==key)
                return;
        }
        v.push_back(key);
    }
    
    void remove(int key) {
        for(int i=0; i<v.size(); i++)
        {
            if (v[i] == key) {
                v[i] = v.back(); 
                v.pop_back();    
                return;
            }
        }
    }
    
    bool contains(int key) {
        for(int i=0; i<v.size(); i++)
        {
            if(v[i]==key)
                return true;
        }
        return false;
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */