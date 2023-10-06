class Solution {
public:
    int integerBreak(int n) {
        int x=1;
        vector<int>v;
        if(n==2)
            return 1;
        else if(n==3)
            return 2;
        while(1)
        {
            if(n-3==0)
            {
                n=n-3;
                v.push_back(3);
                break;
            }
            else if(n-2==0)
            {
                n=n-2;
                v.push_back(2);
                break;
            }
            else if(n-1==0)
            {
                v[v.size()-1]+=1;
                break;
            }
            n=n-3;
            v.push_back(3);
        }
   
        for(int i=0; i<v.size(); i++)
        {
            x*=v[i];
        }

        return x;
    }
};