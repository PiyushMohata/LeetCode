class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int>answer(nums.size(),0),prefix,postfix(nums.size(),0);
        prefix.push_back(nums[0]);
        postfix[nums.size()-1]=nums[nums.size()-1];
        for(int i=1; i<nums.size(); i++)
        {
            prefix.push_back(nums[i]*prefix[i-1]);
        } 

        for(int i=nums.size()-2; i>=0; i--)
        {
            postfix[i]=nums[i]*postfix[i+1];
        }

        answer[0]=postfix[1];
        answer[nums.size()-1]=prefix[nums.size()-2];
        for(int i=1; i<nums.size()-1; i++)
        {
            answer[i]=prefix[i-1]*postfix[i+1];
        }

        return answer;
    }
};