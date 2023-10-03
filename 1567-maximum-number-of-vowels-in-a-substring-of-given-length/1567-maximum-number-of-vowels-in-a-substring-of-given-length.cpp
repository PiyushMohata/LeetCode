class Solution {
public:
    int maxVowels(string s, int k) {
        int a=0,b=0,count=0,res=0;

        while(b<s.size())
        {
            if(b-a==k)
            {
                if(s[a]=='a' || s[a]=='e' || s[a]=='i' || s[a]=='o' || s[a]=='u')
                {
                    count--;
                }
                a++;
            }

            if(s[b]=='a' || s[b]=='e' || s[b]=='i' || s[b]=='o' || s[b]=='u')
            {
                count++;
            }

            res=max(res,count);
            b++;
        }
        return res;
    }
};