class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<char,string>m;
        unordered_map<string,char>m1;
        vector<string>v;

        string word = "";
        for (auto x : s)
        {
            if (x == ' ')
            {
                v.push_back(word);
                word = "";
            }
            else {
                word = word + x;
            }
        }
        v.push_back(word);

        if(pattern.size()!=v.size())
            return false;

        for(int i=0; i<pattern.size(); i++)
        {
            if(m.find(pattern[i]) != m.end() && m[pattern[i]]!=v[i])
                return false;
            if(m1.find(v[i]) != m1.end() && m1[v[i]]!=pattern[i])
                return false;
            m[pattern[i]]=v[i];
            m1[v[i]]=pattern[i];
        }

        return true;
    }
};