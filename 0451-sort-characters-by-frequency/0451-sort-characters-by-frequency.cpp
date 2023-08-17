class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int>m;
        vector<int>v;
        string str="";

        for(int i=0; i<s.size(); i++)
        {
            m[s[i]]++;
        }

        for(auto x:m)
        {
            v.push_back(x.second);
        }
        sort(v.begin(),v.end(), greater <>());

        for(int i=0; i<v.size(); i++)
        {
            for(auto x:m)
            {
                if(x.second==v[i])
                {
                    for(int j=0; j<x.second; j++)
                    {
                        str+=x.first;
                    }
                    m[x.first]=0;
                }
            }
        }
        return str;
    }
};