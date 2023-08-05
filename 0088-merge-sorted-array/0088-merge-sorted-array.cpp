class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int a=0,b=m;
        while(b<nums1.size())
        {
            nums1[b]=nums2[a];
            b++,a++;
        }
        sort(nums1.begin(),nums1.end());
    }
};