class Solution {
public:
    string decodeString(string s) {
        string str="";
        stack<char>st;

        for(int i=0; i<s.size(); i++)
        {
            string str1="",str2="";
            if(s[i]==']')
            {
                while(st.top()!='[')
                {
                    str1=st.top()+str1;
                    st.pop();
                }
                st.pop();
                while(!st.empty() && isdigit(st.top()))
                {
                    str2=st.top()+str2;
                    st.pop();
                }
                int k=stoi(str2);
                while(k-->0)
                {
                    for(int j=0; j<str1.size(); j++)
                    {
                        st.push(str1[j]);
                    }
                }
            }
            else
            {
                st.push(s[i]);
            }
        }
        while(!st.empty())
        {
            str+=st.top();
            st.pop();
        }
        reverse(str.begin(),str.end());
        return str;
    }
};