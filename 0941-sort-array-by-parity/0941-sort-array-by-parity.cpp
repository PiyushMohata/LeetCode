class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int a=0,b=nums.size()-1;

        while(a<b)
        {
            if(nums[a]%2==0)
            {
                a++;
            }
            else
            {
                swap(nums[a],nums[b]);
                b--;
            }
        }
        return nums;
    }
};