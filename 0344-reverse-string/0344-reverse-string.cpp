class Solution {
public:
    void reverseString(vector<char>& s) {
        vector<char> str=s;
        int a=0,b=s.size()-1;
        while(b>=0)
        {
            s[a]=str[b];
            a++;
            b--;
        }
    }
};