class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int>m;
        for (int num : nums1) 
        {
            m[num] = 0;
        }
        unordered_map<int,int>m1;
        for (int num : nums2) 
        {
            m1[num] = 0;
        }
        vector<vector<int>>ans;
        vector<int>v;
        for(int i=0; i<nums1.size(); i++)
        {
            for(int j=0; j<nums2.size(); j++)
            {
                if(nums2[j]==nums1[i])
                    m[nums1[i]]+=1;
            }
        }

        for(int i=0; i<nums2.size(); i++)
        {
            for(int j=0; j<nums1.size(); j++)
            {
                if(nums1[j]==nums2[i])
                    m1[nums2[i]]+=1;
            }
        }

        for(auto x:m)
        {
            if(x.second==0)
            {
                v.push_back(x.first);
            }
        }
        ans.push_back(v);
        v.clear();

        for(auto x:m1)
        {
            if(x.second==0)
            {
                v.push_back(x.first);
            }
        }
        ans.push_back(v);

        return ans;
    }
};