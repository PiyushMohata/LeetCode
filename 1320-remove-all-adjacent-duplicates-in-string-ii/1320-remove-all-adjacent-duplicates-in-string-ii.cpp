class Solution {
public:
    string removeDuplicates(string s, int k) {
        stack<pair<char,int>>st;
        string ans="";
        
        for(int i=0; i<s.size(); i++)
        {
            if(!st.empty() && s[i]==st.top().first)
            {
                st.top().second++;
                st.push({s[i],st.top().second});
                if(st.top().second==k)
                {
                    while(!st.empty() && st.top().first==s[i])
                    {
                        st.pop();
                    }
                }
            }
            else
            {
                st.push({s[i],1});
            }
        }
        while(!st.empty())
        {
            ans+=st.top().first;
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};