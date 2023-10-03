class Solution {
public:
    int maxVowels(string s, int k) {
        int a=0,b=0,count=0,res=0;
        unordered_map<char,int>m;
        m['a']++;
        m['e']++;
        m['i']++;
        m['o']++;
        m['u']++;

        while(b<s.size())
        {
            if(b-a==k)
            {
                if(m.find(s[a])!=m.end())
                {
                    count--;
                }
                a++;
            }

            if(m.find(s[b])!=m.end())
            {
                count++;
            }

            res=max(res,count);
            b++;
        }
        return res;
    }
};