class Solution {
    int count=0;
public:
    int arraySign(vector<int>& nums) {
        return signFunc(nums);
    }

    private: int signFunc(vector<int>v)
    {
        for(int i=0; i<v.size(); i++)
        {
            if(v[i]==0)
                return 0;
            else{
                if(v[i]<0)
                    count++;
            }
        }
        if(count%2!=0)
            return -1;
        else
            return 1;
    }
};