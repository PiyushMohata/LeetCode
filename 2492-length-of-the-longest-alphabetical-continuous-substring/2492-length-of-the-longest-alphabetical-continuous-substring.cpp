class Solution {
public:
    int longestContinuousSubstring(string s) {
        int a=1,ans=0,count=1;
        if(s.size()==1)
            return 1;

        while(a<s.size())
        {
            if(s[a]-s[a-1]==1)
            {
                count++;
            }
            else
            {
                count=1;
            }
            ans=max(ans,count);
            a++;
        }
        return ans;
    }
};