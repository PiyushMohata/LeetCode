class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> occurrences;
        
        for (int num : nums1) {
            occurrences[num]++;
        }
        
        vector<int> diff1, diff2;
        
        for (int num : nums2) {
            if (occurrences.find(num) == occurrences.end() && find(diff2.begin(), diff2.end(), num) == diff2.end()) {
                diff2.push_back(num);
            } else if (occurrences[num] > 0) {
                occurrences[num]=0;
            }
        }
        
        for (auto& [num, count] : occurrences) {
            if(count > 0) {
                diff1.push_back(num);
            }
        }
        
        return {diff1, diff2};
    }
};
