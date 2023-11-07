class Solution {
public:
    int search(vector<int>& nums, int target) {
        int a=0,b=nums.size()-1;

        while(a<=b)
        {
            int mid=a+(b-a)/2;

            if(nums[mid]==target)
                return mid;
            
            if(nums[a]<=nums[mid])
            {
                if(target>=nums[a] && target<=nums[mid])
                    b=mid-1;
                else
                    a=mid+1;
            }
            else
            {
                if(target>=nums[mid] && target<=nums[b])
                    a=mid+1;
                else
                    b=mid-1;
            }
        }

        return -1;
    }
};