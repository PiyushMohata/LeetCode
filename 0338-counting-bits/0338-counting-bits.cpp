class Solution {
public:
    vector<int> countBits(int n) {
        int x=0;
        vector<int>ans;
        for(int i = 0; i<=n; i++)
        {
            int sum=0,num=i;
            while(num!=0)
            {
                sum+=num%2;
                num=num>>1;
            }
            ans.push_back(sum);
        }

        return ans;
    }
};