class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char,int>m;
        char I,V,X,L,C,D,M;
        m['I']=1;
        m['V']=5;
        m['X']=10;
        m['L']=50;
        m['C']=100;
        m['D']=500;
        m['M']=1000;

        int sum=m[s[0]];
        for(int i=1; i<s.size(); i++)
        {
            if(m[s[i]]>m[s[i-1]])
            {
                sum-=m[s[i-1]];
                sum-=m[s[i-1]];
            }
            sum+=m[s[i]];
        }
        
        return sum;
    }
};