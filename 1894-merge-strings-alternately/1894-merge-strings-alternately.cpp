class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int a=0,b=0;
        string s="";
        while(b<max(word1.size(),word2.size()))
        {
            if(a<word1.size())
                s+=word1[a];
            if(b<word2.size())
                s+=word2[b];
            a++;
            b++;
        }
        return s;
    }
};