class Solution {
public:
    double champagneTower(int poured, int query_row, int query_glass) {
        vector<double>v;
        v.push_back(poured);
        
        for(int i=0; i<=query_row; i++)
        {
            vector<double>v1(i+2,0);
            for(int j=0; j<=i; j++)
            {
                if(v[j]>1)
                {
                    v1[j]+=(v[j]-1)/2.0;
                    v1[j+1]+=(v[j]-1)/2.0;
                    v[j]=1;
                }
            }
            if(i!=query_row) v=v1;
        }

        return v[query_glass];
    }
};