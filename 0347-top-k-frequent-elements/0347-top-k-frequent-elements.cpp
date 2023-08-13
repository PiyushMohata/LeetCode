class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>m;
        vector<int>ans;

        for(int i=0; i<nums.size(); i++)
        {
            m[nums[i]]+=1;
        }

        for(int i=0; i<k; i++)
        {
            int maxi=INT_MIN;
            int maxkey=-1;

            for(auto x:m)
            {
                if (x.second > maxi) {
                    maxi = x.second;
                    maxkey = x.first;
                }
            }

            ans.push_back(maxkey);
            m.erase(maxkey);
        }
        return ans;
    }
};