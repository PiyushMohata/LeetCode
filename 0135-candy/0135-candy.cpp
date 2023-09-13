class Solution {
public:
    int candy(vector<int>& r) {
        vector<int>v(r.size(),1);
        int sum=0;
        for(int i=1; i<r.size(); i++)
        {
            if(r[i]>r[i-1])
            {
                v[i]=v[i-1]+1;
            }
        }

        for(int i=r.size()-2; i>=0; i--)
        {
            if(r[i]>r[i+1])
            {
                v[i]=max(v[i],v[i+1]+1);
            }
        }

        for(auto x:v)
        {
            sum+=x;
        }
        return sum;
    }
};