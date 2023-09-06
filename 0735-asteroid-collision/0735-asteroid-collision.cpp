class Solution {
public:
    vector<int> asteroidCollision(vector<int>& as) {
        stack<int> st;
        
        for (int i = 0; i < as.size(); ++i) {
            if (as[i] > 0) {
                st.push(as[i]);
            } else {
                while (!st.empty() && st.top() > 0 && st.top() < abs(as[i])) {
                    st.pop();
                }
                
                if (st.empty() || st.top() < 0) {
                    st.push(as[i]);
                } else if (st.top() == abs(as[i])) {
                    st.pop();
                }
            }
        }
        
        vector<int> v(st.size());
        int index = st.size() - 1;
        
        while (!st.empty()) {
            v[index--] = st.top();
            st.pop();
        }
        
        return v;
    }
};
