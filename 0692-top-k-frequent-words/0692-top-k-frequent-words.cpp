class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        unordered_map<string,int>m;
        vector<string>v;
        vector<pair<int,string>>vm;

        sort(words.begin(),words.end());

        for(int i=0; i<words.size(); i++)
        {
            m[words[i]]++;
        }

        for(auto x:m)
        {
            vm.push_back({x.second,x.first});
        }

        sort(vm.begin(), vm.end(), 
        [](const pair<int, string>& a, const pair<int,   string>& b) {
    return a.first > b.first || (a.first == b.first && a.second < b.second);
    });

        for(auto x:vm)
        {
            if(v.size()==k)
                break;
            v.push_back(x.second);
        }
        
        return v;
    }
};