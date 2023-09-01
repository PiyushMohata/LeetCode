class Solution {
public:
    vector<int> countBits(int n) {
        int x=0,count=0;
        vector<int>v,b;
        while(x<=n)
        {
            int m=x;
            while (m > 0) 
            {
                b.push_back(m % 2);
                m = m / 2;
            }
            x++;
            for(int i=0; i<b.size(); i++)
            {
                if(b[i]==1)
                    count++;
            }
            v.push_back(count);
            b.clear();
            count=0;
        }

        return v;
    }
};