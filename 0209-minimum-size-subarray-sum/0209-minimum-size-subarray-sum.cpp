class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int a=0,b=0,sum=0,res=INT_MAX;

        while(a<nums.size())
        {
            sum+=nums[a];
            while(sum>=target)
            {
                res=min(res,a-b+1);
                sum-=nums[b];
                b++;
            }
       
            a++;
        }
        if(res==INT_MAX)
            return 0;
        return res;
    }
};