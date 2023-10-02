class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int right=0,size=0,left=0;
        long total=0;

        while(right<nums.size())
        {
            total+=nums[right];
            while((long)nums[right]*(right-left+1)>total+k)
            {
                total-=nums[left];
                left++;
            }
            size=max(size,right-left+1);
            right++;
        }
        return size;
    }
};