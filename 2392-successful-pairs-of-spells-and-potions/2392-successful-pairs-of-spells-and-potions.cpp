class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        vector<int>v;
        sort(potions.begin(),potions.end());
        for(int i=0; i<spells.size(); i++)
        {
            int a=0,b=potions.size()-1;
            while(a<=b)
            {
                int mid=a+(b-a)/2;
                long long x=spells[i],y=potions[mid],z=x*y;

                if(z>=success)
                    b=mid-1;
                else
                    a=mid+1;
            }
            v.push_back(potions.size()-a);
        }
        return v;
    }
};