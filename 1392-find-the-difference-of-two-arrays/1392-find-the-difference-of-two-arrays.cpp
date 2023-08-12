class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> m;
        
        for (int num : nums1) {
            m[num]++;
        }
        
        vector<int> diff1, diff2;
        
        for (int num : nums2) {
            if (m.find(num) == m.end() && find(diff2.begin(), diff2.end(), num) == diff2.end()) {
                diff2.push_back(num);
            } else if (m[num] > 0) {
                m[num]=0;
            }
        }
        
        for (auto& [num, count] : m) {
            if(count > 0) {
                diff1.push_back(num);
            }
        }
        
        return {diff1, diff2};
    }
};
