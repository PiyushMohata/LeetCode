class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int mini=INT_MAX,maxi=INT_MIN,a=0,b=nums.size()-1,c=0,d=nums.size()-1;

        while(a<=b)
        {
            int mid=(a+b)/2;
            if(nums[mid]==target)
            {
                mini=min(mini,mid);
                maxi=max(maxi,mid);
            }

            if(nums[mid]<=target)
            {
                a=mid+1;
            }
            else
            {
                b=mid-1;
            }
        }

        while(c<=d)
        {
            int mid=(c+d)/2;
            if(nums[mid]==target)
            {
                mini=min(mini,mid);
                maxi=max(maxi,mid);
            }

            if(nums[mid]<target)
            {
                c=mid+1;
            }
            else
            {
                d=mid-1;
            }
        }

        if(mini==INT_MAX && maxi==INT_MIN)
            return {-1,-1};
        return {mini,maxi};
    }
};