class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int t) 
    {
        int sum = 0 , ans = 0;

        for(int i=0; i<k; i++)
        {
            sum=sum+arr[i];
        }

        if(sum/k>=t)
            ans++;

        for(int i=k; i<arr.size(); i++)
        {
            sum = sum-arr[i-k] + arr[i];
            if(sum/k>=t)
                ans++;
        }
        return ans;
    }
};