class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int a=0,b=0,res=INT_MAX,count=0;

        while(a<blocks.size())
        {
            if(blocks[a]=='W')
            {
                count++;
            }

            if(a-b+1==k)
            {
                res=min(res,count);
                if(blocks[b]=='W')
                    count--;
                b++;
            }
        
            a++;
        }
        return res;
    }
};