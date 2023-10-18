class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int a=0,b=nums.size()-1;

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