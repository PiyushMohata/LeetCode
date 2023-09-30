class Solution {
public:
    string smallestSubsequence(string s) {
        stack<char>st;
        unordered_map<char,int>m;
        vector<bool>isThere(26,false);

        for(int i=0; i<s.size(); i++)
        {
            m[s[i]]++;
        }

        for(int i=0; i<s.size(); i++)
        {
            m[s[i]]--;

            if(isThere[s[i] - 'a'])
                continue;
            
            while(!st.empty() && s[i]<st.top() && m[st.top()]>0)
            {
                isThere[st.top() - 'a']=false;
                st.pop();
            }

            st.push(s[i]);
            isThere[s[i] - 'a']=true;
        }

        string str="";
        while(!st.empty())
        {
            str=st.top()+str;
            st.pop();
        }
        return str;
    }
};