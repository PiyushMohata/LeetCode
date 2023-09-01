class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
       int result=0;
       int x=32;
       if(n==0)
        return 0;
       while(x--)
       {
           if(n==0)
           {
               result=result<<x+1;
               return result;
           }
           result=result<<1;
           if(n&1==1)
           {
               result++;
           }
           n=n>>1;
       }
       return result;
    }
};