class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int r=0,l=*max_element(weights.begin(),weights.end());
        r=accumulate(weights.begin() , weights.begin() + weights.size() , r);
        int res=r,n=weights.size();

        while(l<=r)
        {
            int cap=(l+r)/2;

            if(canShip(cap,n,weights,days))
            {
                res=min(res,cap);
                r=cap-1;
            }
            else
                l=cap+1;
        }
        return res;
    }

    int canShip(int cap, int n, vector<int>& weights, int days)
        {
            int ship=1,capx=cap;
            for(int i=0; i<n; i++)
            {
                if(capx-weights[i]<0)
                {
                    ship++;
                    capx=cap;
                }
                capx-=weights[i];
            }
            return ship<=days;
        }
};