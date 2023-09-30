class Solution {
public:
    int minOperations(vector<int>& nums) {
        unordered_map<int,int>m;
        unordered_map<int,int>m1;
        int count=0;
        for(int i=0; i<nums.size(); i++)
        {
            m1[nums[i]]++;
        }
        for(auto x:m1)
        {
            if(x.second==1)
                return -1;
        }
        
        for(int i=0; i<nums.size(); i++)
        {
            m[nums[i]]++;
            if(m[nums[i]]%3==0)
            {
                count+=m[nums[i]]/3;
                m[nums[i]]=0;
            }
        }
        
        for(auto x:m)
        {
            if(x.second%2==0)
                count+=x.second/2;
            else
                count+=1;
        }
        return count;
    }
};