class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<char,int>m;
        int res=0,ans=0,start=0;

        for(int i=0; i<s.size(); i++)
        {
            m[s[i]]++;
            ans=max(ans,m[s[i]]);
            if(i-start+1-ans>k)
            {
                m[s[start]]--;
                start++;
            }

            res=max(res,i-start+1);
        }
        return res;
    }
};