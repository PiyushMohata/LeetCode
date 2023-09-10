class Solution {
public:
    int carFleet(int target, vector<int>& pos, vector<int>& s) {
        vector<pair<int,int>>v;

        for(int i=0; i<pos.size(); i++)
        {
            v.push_back({pos[i],s[i]});
        }
        sort(v.begin(),v.end());

        stack<float>st;
        for(int i=0; i<v.size(); i++)
        {
            float temp= (float)(target-v[i].first)/(float)v[i].second;

            while(!st.empty() && st.top()<=temp)
            {
                st.pop();
            }
            st.push(temp);
        }
        return st.size();
    }
};