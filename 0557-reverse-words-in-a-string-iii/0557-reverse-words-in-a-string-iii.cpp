class Solution {
public:
    string reverseWords(string s) {
        string str="",words="";
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]==' ')
            {
                str+=words;
                str+=' ';
                words="";
            }
            else
            {
                words=s[i]+words;
            }
        }
        str+=words;
        return str;
    }
};