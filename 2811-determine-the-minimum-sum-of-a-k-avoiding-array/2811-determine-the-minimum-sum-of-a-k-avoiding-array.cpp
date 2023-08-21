class Solution {
public:
    int minimumSum(int n, int k) {
        int sum=0,count=0,i=2;
        vector<int>v;
        v.push_back(1);

         if (k == 1) {
            return n*(n+1)/2;
        }
        
        while(v.size()!=n)
        {
            for(int j=1; j<i; j++)
            {
                if(i+j==k)
                {
                    break;
                }
                else
                {
                    count++;
                }
            }
            if(count==i-1)
            {
                v.push_back(i);
                count=0;
            }
            else
                count=0;
            i++;
        }

        for(auto x:v)
        {
            sum+=x;
        }

        return sum;
    }
};