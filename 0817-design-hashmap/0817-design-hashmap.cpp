class MyHashMap {
    vector<vector<int>>v;
public:
    MyHashMap() {
        v.resize(1000000);
    }
    
    void put(int key, int value) {
    int index = key % v.size();
        
        for (int j = 0; j < v[index].size(); j ++) {
            if (v[index][j] == key) {
                v[index][j + 1] = value;
                return;
            }
        }
        
        v[index].push_back(key);
        v[index].push_back(value);
    }
    
    int get(int key) {
        int index = key % v.size();

        for (int j = 0; j < v[index].size(); j ++) {
            if (v[index][j] == key) {
                return v[index][j + 1];
            }
        }

        return -1;
    }
    
    void remove(int key) {
       int index = key % v.size();

        for (int j = 0; j < v[index].size(); j ++) {
            if (v[index][j] == key) {
                v[index].erase(v[index].begin() + j);
                return;
            }
        }
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */