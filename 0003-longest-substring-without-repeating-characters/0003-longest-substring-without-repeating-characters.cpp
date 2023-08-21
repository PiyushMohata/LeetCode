class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int a=0,b=0,count=0,maxi=INT_MIN;
        unordered_map<char,int>m;

        while(b < s.size())
        {
            if(m.find(s[b])!=m.end())
            {
                // m.erase(m.find(s[a]),m.find(s[b]));
                maxi=max(maxi,count);
                count=0;
                a++;
                b=a;
                m.clear();
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