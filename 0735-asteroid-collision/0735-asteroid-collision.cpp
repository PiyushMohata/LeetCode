class Solution {
public:
    vector<int> asteroidCollision(vector<int>& as) {
        stack<int> st;
        vector<int> v;
        
        for (int i = 0; i < as.size(); ++i) {
            if (as[i] > 0) 
            {
                st.push(as[i]);
            } 
            else 
            {
                while (!st.empty() && st.top() > 0 && st.top() < abs(as[i])) 
                {
                    st.pop();
                }
                
                if (st.empty() || st.top() < 0) 
                {
                    st.push(as[i]);
                } 
                else if (st.top() == abs(as[i])) 
                {
                    st.pop();
                }
            }
        }
    
        while (!st.empty()) 
        {
            v.push_back(st.top());
            st.pop();
        }
        
        reverse(v.begin(),v.end());
        return v;
    }
};
