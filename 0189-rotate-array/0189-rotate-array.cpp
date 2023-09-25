class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int>v;

        for(int i=nums.size()-k%nums.size(); i<nums.size(); i++)
        {
            v.push_back(nums[i]);
        }  

        for(int i=0; i<nums.size()-k%nums.size(); i++)
        {
            v.push_back(nums[i]);
        }
        nums=v;
    }
};