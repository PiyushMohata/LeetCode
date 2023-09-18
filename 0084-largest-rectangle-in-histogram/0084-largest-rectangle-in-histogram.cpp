class Solution {
public:
    int largestRectangleArea(vector<int>& h) {
        stack<pair<int,int>>st;
        int maxArea=0;
        for(int i=0; i<h.size(); i++)
        {
            int x=i;
            while(!st.empty() && st.top().second>h[i])
            {
                maxArea=max(maxArea,st.top().second*(i-st.top().first));
                x=st.top().first;
                st.pop();
            }
            st.push({x,h[i]});
        }
        while(!st.empty())
        {
            int x=st.top().second*(h.size()-st.top().first);
            maxArea=max(maxArea,x);
            st.pop();
        }
        return maxArea;
    }
};