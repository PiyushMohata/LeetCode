class Solution {
public:
    long long interchangeableRectangles(vector<vector<int>>& rectangles) {
        double a,b;
        long long int sum=0;
        unordered_map<double,long long int>m;

        for(int i=0; i<rectangles.size(); i++)
        {
            a=(double)rectangles[i][0];
            b=(double)rectangles[i][1];
            m[a/b]++;
        }

        for(auto x:m)
        {
            if(x.second>1)
                sum+=x.second*(x.second-1)/2;
        }

        return sum;
    }
};