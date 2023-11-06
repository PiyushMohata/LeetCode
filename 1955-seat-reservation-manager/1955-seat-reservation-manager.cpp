class SeatManager {
    vector<int>v;
    priority_queue<int, vector<int>, greater<int> > pq;
public:
    SeatManager(int n) {
        for(int i=0; i<n; i++)
        {
            pq.push(i+1);
        }
    }
    
    int reserve() {
        v.push_back(pq.top());
        pq.pop();
        return v[v.size()-1];
    }
    
    void unreserve(int seatNumber) {
        pq.push(seatNumber);
    }
};

/**
 * Your SeatManager object will be instantiated and called as such:
 * SeatManager* obj = new SeatManager(n);
 * int param_1 = obj->reserve();
 * obj->unreserve(seatNumber);
 */