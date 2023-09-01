class Solution {
public:
    vector<int> countBits(int n) {
        int x=0;
        vector<int>ans;
        while(x<=n)
        {
            int sum=0,num=x;
            while(num!=0)
            {
                sum+=num%2;
                num=num>>1;
            }
            ans.push_back(sum);
            x++;
        }

        return ans;
    }
};