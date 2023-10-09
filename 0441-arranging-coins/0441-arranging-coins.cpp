class Solution {
public:
    int arrangeCoins(int n) {
        int a=1,b=n,ans;
        long long mid=a+(b-a)/2;
        while(a<=b)
        {
            long long val=mid*(mid+1)/2;
            if(val<=n)
            {
                ans=mid;
                a=mid+1;
            }
            else if(val>n)
            {
                b=mid-1;
            }
            mid=a+(b-a)/2;
        }
        return ans;
    }
};