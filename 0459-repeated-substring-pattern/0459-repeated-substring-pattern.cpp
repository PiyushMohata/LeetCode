class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        int n = s.size();
        
        for (int len = 1; len <= n / 2; len++) {
            if (n % len == 0) {
                string pattern = s.substr(0, len);
                int i = len;
                while (i < n) {
                    if (s.substr(i, len) != pattern) {
                        break;
                    }
                    i += len;
                }
                if (i == n) {
                    return true;
                }
            }
        }
        
        return false;
    }
};