class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int a=0;
        while(m<nums1.size())
        {
            nums1[m]=nums2[a];
            m++,a++;
        }
        sort(nums1.begin(),nums1.end());
    }
};