class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char>st;
        string str="",str1="";
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]=='#' && !st.empty())
                st.pop();
            else if(s[i]!='#')
                st.push(s[i]);
        }

        while(!st.empty())
        {
            str+=st.top();
            st.pop();
        }
        reverse(str.begin(),str.end());

        for(int i=0; i<t.size(); i++)
        {
            if(t[i]=='#' && !st.empty())
                st.pop();
            else if(t[i]!='#')
                st.push(t[i]);
        }

        while(!st.empty())
        {
            str1+=st.top();
            st.pop();
        }
        reverse(str1.begin(),str1.end());

        if(str==str1)
            return true;
        return false;
    }
};