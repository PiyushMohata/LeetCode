class Solution {
public:
    bool isSubsequence(string s, string t) {
        // int k=0,l,count=0;
        // for(int i=0; i<s.size(); i++)
        // {
        //     for(int j=k; j<t.size(); j++)
        //     {
        //         if(s[i]==t[j])
        //         {
        //             count++;
        //             l=j;
        //             break;
        //         }
        //     }
        //     k=l+1;
        // }
        // if(count>=s.size())
        //     return true;
        // return false;

        int i=0,j=0;
        int a=s.size(),b=t.size();

        while(i<a && j<b)
        {
            if(s[i]==t[j])
            {
                i++,j++;
            }
            else
            {
                j++;
            }
        }
        if(i==a)
            return true;
        return false;
    }
};