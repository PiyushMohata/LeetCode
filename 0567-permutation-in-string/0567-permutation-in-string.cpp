class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s2.size()<s1.size())
            return false;
        unordered_map<char,int>m,m1;
        for(int i=0; i<s1.size(); i++)
        {
            m[s1[i]]++;
        }

        int a=0,b=0;
        while(a<s2.size())
        {
            m1[s2[a]]++;
            if(a-b+1==s1.size())
            {
                if(areEqual(m,m1))
                    return true;
            }

            if(a-b+1<s1.size())
                a++;
            else
            {
                m1[s2[b]]--;
                a++;
                b++;
            }
        }
        return false;
    }

    bool areEqual(unordered_map<char,int>m,unordered_map<char,int>m1)
    {
        for(auto x:m)
        {
            if(x.second!=m1[x.first])
                return false;
        }
        return true;
    }
};