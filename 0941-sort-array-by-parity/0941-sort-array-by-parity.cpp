class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int a=0,b=nums.size()-1;
        if(nums.size()==1)
            return nums;
        while(a<b)
        {
            if(nums[a]%2!=0 && nums[b]%2==0)
            {
                swap(nums[a],nums[b]);
                a++,b--;
            }

            while(b>0 && nums[b]%2!=0)
            {
                b--;
            }
            while(a<nums.size() && nums[a]%2==0)
            {
                a++;
            }
        }
        return nums;
    }
};