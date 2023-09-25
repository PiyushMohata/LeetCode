class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        vector<vector<int>>v;

        for(int i=0; i<nums.size(); i++)
        {
            if(i>0 && nums[i]==nums[i-1])
                continue;
            for(int j=i+1; j<nums.size(); j++)
            {
                if(j>(i+1) && nums[j]==nums[j-1])
                    continue;
                
                int l=j+1,r=nums.size()-1;
                while(l<r)
                {
                    long long sum=(long)nums[i]+(long)nums[j]+(long)nums[l]+(long)nums[r];
                    if(sum==target)
                    {
                        vector<int>x;
                        x.push_back(nums[i]);
                        x.push_back(nums[j]);
                        x.push_back(nums[l]);
                        x.push_back(nums[r]);
                        v.push_back(x);
                        l++;
                        r--;

                        while(l<r && nums[l]==nums[l-1])
                            l++;
                    }
                    else if(sum>target)
                    {
                        r--;
                    }
                    else
                        l++;
                }
            }
        }
        return v;
    }
};