class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int a=0,b=nums.size()-1;

        if(nums.size()==1)
            return nums[0];
        if(nums[1]!=nums[0])
            return nums[0];
        else if(nums[nums.size()-1]!=nums[nums.size()-2])
            return nums[nums.size()-1];

        while(a<=b)
        {
            int mid=a+(b-a)/2;

            if((mid-1<0 || nums[mid]!=nums[mid-1]) && (mid+1==nums.size() || nums[mid]!=nums[mid+1]))
                return nums[mid];

            if(nums[mid-1]==nums[mid])
            {
                if((mid-1)%2!=0)
                    b=mid-1;
                else
                    a=mid+1;
            }
            else
            {
                if(mid%2!=0)
                    b=mid-1;
                else
                    a=mid+1;
            }
        }
        return -1;
    }
};