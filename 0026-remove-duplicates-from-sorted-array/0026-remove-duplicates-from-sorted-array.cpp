class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        unordered_set<int>s;
        for(int i=0; i<nums.size(); i++)
        {
            s.insert(nums[i]);
        }
        nums.erase(nums.begin(),nums.end());
        for(auto x:s)
        {
            nums.push_back(x);
        }
        sort(nums.begin(),nums.end());
        return s.size();
    }
};