class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int a=0,b=1;
        while(b<nums.size())
        {
            if(nums[a]==0 && nums[b]==0)
                b++;
            else if(nums[a]==0 && nums[b]!=0)
            {
                swap(nums[a],nums[b]);
            }
            else
                b++,a++;
        }
    }
};