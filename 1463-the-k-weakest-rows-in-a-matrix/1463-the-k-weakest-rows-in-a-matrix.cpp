class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        set<pair<int,int>>s;
        vector<int>v;

        for(int i=0; i<mat.size(); i++)
        {
            int count=0;
            for(int j=0; j<mat[i].size(); j++)
            {
                if(mat[i][j]==1)
                    count++;
            }

            s.insert({count,i});
        }

        for(auto x:s)
        {
            if(k==0)
                break;
            v.push_back(x.second);
            k--;
        }
        return v;
    }
};