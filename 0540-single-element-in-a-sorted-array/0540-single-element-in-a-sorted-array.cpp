class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int a=0,b=nums.size()-1;

        while(a<b)
        {
            int mid=a+(b-a)/2;

            if(mid%2==0)
            {
                if(nums[mid]==nums[mid+1])
                {
                    a=mid+1;
                }
                else
                    b=mid;
            }
            else
            {
                if(nums[mid]==nums[mid-1])
                {
                    a=mid+1;
                }
                else
                    b=mid;
            }
        }
        return nums[a];
    }
};