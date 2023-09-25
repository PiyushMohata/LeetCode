class Solution {
public:
    int numSubseq(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int ans=0 , mod=1000000007, l=0, r=nums.size()-1;

        vector<int>pow(nums.size(),1);
        for(int i=1; i<nums.size(); i++)
        {
            pow[i]=pow[i-1]*2%mod;
        }

        while(l<=r)
        {
            if(nums[l]+nums[r]>target)
                r--;
            else
            {
                ans=(ans+pow[r-l]%mod)%mod;
                l++;
            }
        }
        return ans%mod;
    }
};