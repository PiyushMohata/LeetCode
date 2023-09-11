class Solution {
public:
    string simplifyPath(string path) {
        stack<string>st;
        string s="";

        for(int i=0; i<path.size(); i++)
        {
            if(path[i]=='/')
                continue;
            string temp="";
            while(path[i]!='/' && i<path.size())
            {
                temp+=path[i];
                i++;
            }
            if(temp==".")
                continue;
            else if(temp==".." && !st.empty())
                st.pop();
            else if(temp!="..")
                st.push(temp);
        }


        while(!st.empty())
        {
            s='/'+st.top()+s;
            st.pop();
        }

        if(s.size()==0)
            return "/";

        return s;
    }
};