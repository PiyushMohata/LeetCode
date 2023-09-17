class Solution {
public:
    int countWays(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int ans=0;
        for(int i=0; i<nums.size(); i++)
        {
            if(i+1>nums[i])
            {
                if(i+1<nums.size() && nums[i+1]>i+1)
                    ans++;
                else if(i+1==nums.size())
                    ans++;
            }
        }
        if(nums[0]!=0)
            ans++;

        return ans;
    }
};