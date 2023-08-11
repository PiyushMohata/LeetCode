class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<char,vector<int>>m;
        unordered_map<string,vector<int>>m1;
        vector<string>v;

        for(int i=0; i<pattern.size(); i++)
        {
            m[pattern[i]].push_back(i);
        }

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

        for(int i=0; i<v.size(); i++)
        {
            m1[v[i]].push_back(i);
        }

        if (pattern.size() != v.size()) {
            return false; 
        }

        for(int i=0; i<pattern.size(); i++)
        {
            if(m[pattern[i]]!=m1[v[i]])
            {
                return false;
            }
                
        }
        return true;
    }
};