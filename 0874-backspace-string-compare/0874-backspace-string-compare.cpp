class Solution {
public:
    bool backspaceCompare(string s, string t) {
        string str="",str1="";
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]=='#' && !str.empty())
                str.pop_back();
            else if(s[i]!='#')
                str+=s[i];
        }

        for(int i=0; i<t.size(); i++)
        {
            if(t[i]=='#' && !str1.empty())
                str1.pop_back();
            else if(t[i]!='#')
                str1+=t[i];
        }

        if(str==str1)
            return true;
        return false;
    }
};