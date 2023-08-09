class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        unordered_map<int,int>s;
        vector<int>ans;
        sort(nums.begin(),nums.end());
        for(int i=0; i<nums.size(); i++)
        {
            s[nums[i]]=i;
        }

        for(int i=1; i<nums.size()+1; i++)
        {
            if(s.find(i)==s.end())
                ans.push_back(i);
        }
        return ans;
    }
};