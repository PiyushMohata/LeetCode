class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int>m;
        vector<int>ans;
        for(int i=0; i<nums2.size(); i++)
        {
            int a=-1;
            for(int j=i+1; j<nums2.size(); j++)
            {
                if(nums2[j]>nums2[i])
                {
                    a=nums2[j];
                    break;
                }                   
            }

            m[nums2[i]]=a;
        }

        for(int i=0; i<nums1.size(); i++)
        {
            if(m.find(nums1[i])!=m.end())
            {
                ans.push_back(m[nums1[i]]);
            }
        }
        return ans;
    }
};