class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        if(nums.size() == 1) return 0;
        int a=0,b=nums.size()-1;

        while(a<=b)
        {
            int mid=a+(b-a)/2;

            if(mid==0 && nums[mid]>nums[mid+1])
                return mid;
            if(mid==nums.size()-1 && nums[mid]>nums[mid-1])
                return mid;
            if(mid>0 && mid<nums.size()-1 && nums[mid]>nums[mid-1] && nums[mid]>nums[mid+1])
                return mid;
            if(mid>0 && nums[mid-1]>nums[mid])
                b=mid-1;
            else
                a=mid+1;
        }
        return -1;
    }
};