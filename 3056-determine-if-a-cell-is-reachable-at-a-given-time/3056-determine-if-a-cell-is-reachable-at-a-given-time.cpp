class Solution {
public:
    bool isReachableAtTime(int sx, int sy, int fx, int fy, int t) 
    {
        int x = max(abs(fx-sx),abs(fy-sy));
        
        if(sx==fx && sy==fy && t==1)
            return false;
        if(t>=x)
            return true;
        else
            return false;
    }
};