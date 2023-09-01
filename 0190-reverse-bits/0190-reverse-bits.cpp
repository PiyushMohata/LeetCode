class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
       int result=0;
       int x=32;

       while(x--)
       {
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