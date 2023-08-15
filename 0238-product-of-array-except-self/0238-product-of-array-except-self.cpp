class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int prefix=1,postfix=1;
        vector<int>ans;

        for(int i=1; i<nums.size(); i++)
        {
            postfix*=nums[i];
        }
        ans.push_back(postfix);

        for(int i=1; i<nums.size(); i++)
        {
            if(nums[i]==0)
            {
                postfix=1;
                for(int j=i+1; j<nums.size(); j++)
                {
                    postfix*=nums[j];
                }
            }
            else
                postfix=postfix/nums[i];

            prefix*=nums[i-1];

            ans.push_back(prefix*postfix);
        }
        return ans;
    }
};