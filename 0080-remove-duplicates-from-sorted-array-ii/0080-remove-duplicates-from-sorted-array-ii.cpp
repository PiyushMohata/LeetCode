class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int left=1,k=0;
        for(int right=1; right<nums.size(); right++)
        {
            if(nums[right]==nums[right-1])
            {
                k++;
                if(k<2)
                {
                    nums[left]=nums[right];
                    left++;
                }
            }
            else
            {
                nums[left]=nums[right];
                left++;
                k=0;
            }
        }
        return left;
    }
};