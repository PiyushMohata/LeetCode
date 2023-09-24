class Solution {
public:
    long long maximumSumOfHeights(vector<int>& m) {
        int maxi=INT_MIN,mini=INT_MAX,mini1=INT_MAX;
        long long ans=0;
        
        if(m.size()==1)
            return m[0];
        
        for(int j=0; j<m.size(); j++)
        {
            long long sum=m[j];
            mini = INT_MAX;
            mini1 = INT_MAX;
            
            for(int i=j-1; i>=0; i--)
            {
                mini=min(mini,m[i]);
                sum+=mini;
            }
            mini=m[j];
            for(int i=j+1; i<m.size(); i++)
            {
                mini=min(mini,m[i]);
                sum+=mini;
            }

            ans=max(ans,sum);
        }
        
        
        return ans;
    }
};