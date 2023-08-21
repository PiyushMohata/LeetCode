class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int a=0,b=0,count=0,maxi=0;
        unordered_map<char,int>m;

        while(b < s.size())
        {
            if(m.find(s[b])!=m.end())
            {
                maxi=max(maxi,count);
                count--;
                m.erase(s[a]);
                a++;
            }
            else
            {
                m[s[b]]++;
                count++;
                b++;
            } 
        }
        return max(maxi,count);
    }
};