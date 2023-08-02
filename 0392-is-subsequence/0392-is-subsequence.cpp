class Solution {
public:
    bool isSubsequence(string s, string t) {
        int k=0,l,count=0;
        for(int i=0; i<s.size(); i++)
        {
            for(int j=k; j<t.size(); j++)
            {
                if(s[i]==t[j])
                {
                    count++;
                    l=j;
                    break;
                }
            }
            k=l+1;
        }
        if(count>=s.size())
            return true;
        else
            return false;
    }
};