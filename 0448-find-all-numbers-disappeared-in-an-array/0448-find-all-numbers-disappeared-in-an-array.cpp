class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        // map<int,int> m;
        // vector<int>ans;
        // int x=1;
        // for(int i=0; i<nums.size(); i++)
        // {
        //     m[nums[i]] = m[nums[i]]+1;
        // }
        
        // for(auto [key,val] : m)
        // {
        //     while(x!=key && x<nums.size())
        //     {
        //         ans.push_back(x);
        //         x++;
        //     }
        //     x++;
        // }
        // while(x<=nums.size())
        // {
        //     ans.push_back(x);
        //     x++;
        // }
        //  return ans;

        vector<int> ans(nums.size(),0),res;
        for(int i=0; i<nums.size(); i++)
        {
            ans[nums[i]-1]++;
        }
        for(int i=0; i<nums.size(); i++)
        {
            if(ans[i]==0)
            {
                res.push_back(i+1);
            }
        }
        return res;
    }
};