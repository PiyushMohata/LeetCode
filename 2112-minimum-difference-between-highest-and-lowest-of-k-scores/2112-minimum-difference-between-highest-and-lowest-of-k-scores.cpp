class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int ans=INT_MAX;
        if(nums.size()==1)
            return 0;
        for(int i=0; i<nums.size()-k+1; i++)
        {
            ans=min(ans,abs(nums[k+i-1]-nums[i]));
        }
        return ans;
    }
};