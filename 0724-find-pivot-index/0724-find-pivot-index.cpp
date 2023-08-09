class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int prefix=0,postfix=0;

        for(int i=0; i<nums.size(); i++)
        {
            if(i!=0)
            {
                for(int j=0; j<i; j++)
                {
                    prefix+=nums[j];
                }
            }

            if(i!=nums.size()-1)
            {
                for(int j=nums.size()-1; j>i; j--)
                {
                    postfix+=nums[j];
                }
            }

            if(prefix==postfix)
                return i;
            
            prefix=0,postfix=0;
            
        }
        return -1;
    }
};