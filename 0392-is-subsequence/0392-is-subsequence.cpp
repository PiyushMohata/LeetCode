class Solution {
public:
    bool isSubsequence(string s, string t) {
     int i=0,j=0;
        int a=s.size(),b=t.size();

        while(i<a && j<b)
        {
            if(s[i]==t[j])
            {
                i++,j++;
            }
            else
            {
                j++;
            }
        }
        if(i==a)
            return true;
        return false;
    }
};