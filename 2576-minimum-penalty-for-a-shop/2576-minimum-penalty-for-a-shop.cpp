class Solution {
public:
    int bestClosingTime(string c) {
        int count=0,count1=0,ans,a=c.size(),c1;
        for(int i=0; i<c.size(); i++)
        {
            if(c[i]=='N')
                count++;
            if(c[i]=='Y')
                count1++;
        }
        c1=count1;
        ans=min(count1,count);
        for(int i=0; i<c.size(); i++)
        {
            if(c[i]=='Y')
            {
                count1--;
            }
            else
            {
                count1++;
            }

            if((ans>count1) || (ans==count1 && a>i))
            {
                ans=count1;
                a=i;
            }
        }

        if(ans==c1)
            return 0;
        else if(a<c.size())
            return a+1;
        else
            return c.size();
    }
};