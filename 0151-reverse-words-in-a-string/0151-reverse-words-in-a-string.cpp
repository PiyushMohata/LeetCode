class Solution {
public:
    string reverseWords(string s) {
        string str="",word="";
        int i=s.size()-1;
        while(i>=0)
        {
            while(i>=0 && s[i]!=' ')
            {
                word+=s[i];
                i--;
            }
            reverse(word.begin(),word.end());
            if(!str.empty())
                str+=" ";
            str+=word;
            word="";
            while(i>=0 && s[i]==' ')
                i--;
        }
        return str;
    }
};