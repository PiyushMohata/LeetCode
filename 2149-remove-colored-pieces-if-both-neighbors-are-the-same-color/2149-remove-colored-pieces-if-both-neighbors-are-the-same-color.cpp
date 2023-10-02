class Solution {
public:
    bool winnerOfGame(string c) {
        int count=0,count1=0;
        for(int i=1; i<c.size(); i++)
        {
            if(c[i]=='A' && c[i-1]=='A' && c[i+1]=='A')
            {
                count++;
            }

            if(c[i]=='B' && c[i-1]=='B' && c[i+1]=='B')
            {
                count1++;
            }
        }

        if(count>count1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};