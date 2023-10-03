class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        unordered_map<int,int>m;
        int a=0,b=0,res=0;

        while(a<fruits.size())
        {
            m[fruits[a]]++;
            while(m.size()>2)
            {
                if(m[fruits[b]]==1)
                    m.erase(fruits[b]);
                else
                    m[fruits[b]]--;
                b++;
            }
            res=max(res,a-b+1);
            a++;
        }
        return res;
    }
};