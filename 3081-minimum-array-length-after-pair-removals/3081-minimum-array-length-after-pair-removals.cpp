class Solution {
public:
    int minLengthAfterRemovals(vector<int>& nums) {
        unordered_map<int,int>m;
        int maxi=INT_MIN;

        for(int i=0; i<nums.size(); i++)
        {
            m[nums[i]]++;
            maxi=max(maxi,m[nums[i]]);
        }

        int x = nums.size()-maxi;
        if(maxi>x)
            return maxi-x;
        
        if(nums.size()%2!=0)
            return 1;
        return 0;
    }
};