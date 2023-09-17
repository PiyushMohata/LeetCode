class Solution {
public:
    string removeKdigits(string num, int k) {
        stack<char>st;
        string str="";

        if(num.length() <= k)   
            return "0";
        if(k == 0)
            return num;

        st.push(num[0]);
        for(int i=1; i<num.size(); i++)
        {
            while(k>0 && !st.empty() && num[i]<st.top())
            {
                st.pop();
                k--;
            }
            st.push(num[i]);

            if(st.size() == 1 && num[i] == '0')
                st.pop();
        }

        while(k && !st.empty())
        {
            st.pop();
            k--;
        }
        
        while(!st.empty())
        {
            str.push_back(st.top());
            st.pop();
        }
        
        reverse(str.begin(),str.end());
 
        if (str.empty())
            return "0";

        return str;
    }
};