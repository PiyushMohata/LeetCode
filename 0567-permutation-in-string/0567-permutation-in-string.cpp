class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s2.size()<s1.size())
            return false;
        
        vector<int>s1v(26,0);
        for(auto c:s1)
            s1v[c-'a']++;
        
        vector<int>s2v(26,0);

        int a=0,b=0;
        while(a<s2.size())
        {
            s2v[s2[a]-'a']++;
            if(a-b+1==s1.size())
            {
                if(s1v==s2v)
                    return true;
            }

            if(a-b+1<s1.size())
                a++;
            else
            {
                s2v[s2[b]-'a']--;
                a++;
                b++;
            }
        }
        return false;
    }
};