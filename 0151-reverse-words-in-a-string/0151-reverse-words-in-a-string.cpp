class Solution {
public:
    string reverseWords(string s) 
    {
        string str="";
        int i=s.size()-1;

        while(i>=0)
        {
            string word="";

            while(i>=0 && s[i]!=' ')
            {
                word+=s[i];
                i--;
            }
            
            if (!word.empty()) 
            {
                if (!str.empty()) {
                    str += ' ';
                }
                reverse(word.begin(),word.end());
                str += word;
            }

            while (i >= 0 && s[i] == ' ') 
                i--;

        }
        return str;
    }
};