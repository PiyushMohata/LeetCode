class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>>ans;

        for(int i=0; i<nums.size()-2; i++)
        {
            if(i>0 && nums[i]==nums[i-1])
                continue;
            
            int a=nums[i];
            int left = i+1, right=nums.size()-1;

            while(left<right)
            {
                int b = nums[left];
                int c = nums[right];
                int sum = a+b+c;

                if(sum==0)
                {
                    ans.push_back({a,b,c});

                    while(left<right && nums[left]==b)
                        left++;
                    while(left<right && nums[right]==c)
                        right--;
                }
                else if(sum<0)
                    left++;
                else
                    right--;
            }
        }
        return ans;
    }
};
