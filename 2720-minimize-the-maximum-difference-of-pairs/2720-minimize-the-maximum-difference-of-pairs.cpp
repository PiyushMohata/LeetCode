class Solution {
public:
    int minimizeMax(vector<int>& nums, int p) {
        if(p==0)
            return 0;
        sort(nums.begin(),nums.end());
        int l=0,r=pow(10,9),res=pow(10,9);

        while(l<=r)
        {
            int mid=l+(r-l)/2;

            if(isValid(mid,nums,p))
            {
                res=mid;
                r=mid-1;
            }
            else
                l=mid+1;
        }
        return res;
    }

    bool isValid(int threshhold, vector<int>nums, int p){
        int i=0,count=0;

        while(i<nums.size()-1)
        {
            if(abs(nums[i]-nums[i+1])<=threshhold)
            {
                count++;
                i+=2;
            }
            else
                i+=1;
                
            if(count==p)
                return true;
        }
        
        return false;
    }
};