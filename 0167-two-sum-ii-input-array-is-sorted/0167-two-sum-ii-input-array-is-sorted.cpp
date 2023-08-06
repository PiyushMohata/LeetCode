class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int a=0,b=numbers.size()-1,sum;
        vector<int>v;
        while(a<b)
        {
            sum=numbers[a]+numbers[b];
            if(sum<target)
                a++;
            else if(sum>target)
                b--;
            else
            {
                v.push_back(a+1);
                v.push_back(b+1);
                return v;
            }
        }
        return v;
    }
};