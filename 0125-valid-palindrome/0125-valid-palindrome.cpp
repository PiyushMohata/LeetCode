class Solution {
public:
    bool isPalindrome(string s) {
        int a = 0, b = s.size() - 1;

        transform(s.begin(), s.end(), s.begin(), ::tolower);

        while (a <= b) {
            if (!iswalnum(s[a])) {
                a++;
            } else if (!iswalnum(s[b])) {
                b--;
            } else if (s[a] == s[b]) {
                a++;
                b--;
            } else {
                return false;
            }
        }

        return true;
    }
};
