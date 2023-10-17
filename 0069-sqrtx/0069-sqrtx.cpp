class Solution {
public:
    int mySqrt(int x) {
        int a=0,b=x;
        
        while(a<=b)
        {
            long long mid=(a+b)/2;

            if(mid*mid==x)
                return mid;
            
            if(mid*mid>x)
            {
                b=mid-1;
            }
            else
            {
                a=mid+1;
            }
        }
        return b;
    }
};