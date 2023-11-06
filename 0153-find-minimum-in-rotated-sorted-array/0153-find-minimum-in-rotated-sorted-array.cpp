class Solution {
public:
    int findMin(vector<int>& nums) {
        int a=0,b=nums.size();

        while(a<=b)
        {
            int mid = a + (b-a)/2;
            if(mid-1>=0 && nums[mid-1]>nums[mid])
                return nums[mid];
            if(nums[mid]>nums[nums.size()-1])
                a=mid+1;
            else
                b=mid-1;
        }

        return nums[0];
    }
};