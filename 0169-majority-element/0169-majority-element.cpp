class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int>m;

        for(int i=0; i<nums.size(); i++)
        {
            m[nums[i]]+=1;
        }

        for(auto [key,value]:m)
        {
            if(value>nums.size()/2)
                return key;
        }
        return 0;
    }
};