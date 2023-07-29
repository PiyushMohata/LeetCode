class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        unordered_map<int,int>m;
        vector<int>v;
        for(int i=0; i<nums.size(); i++)
        {
            m[nums[i]]+=1;
        }

        for(auto[key,val]:m)
        {
            if(val>=2)
                v.push_back(key);
        }
        return v;
    }
};