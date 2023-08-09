class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int prefix=0,postfix=0,sum=0;

        for(int i=0; i<nums.size(); i++)
        {
            sum+=nums[i];
        }

        for(int i=0; i<nums.size(); i++)
        {
            if(i!=0)
                prefix+=nums[i-1];

  
            postfix=sum-prefix-nums[i];
            
            if(prefix==postfix)
                return i;
            
            
        }
        return -1; 
    }
};