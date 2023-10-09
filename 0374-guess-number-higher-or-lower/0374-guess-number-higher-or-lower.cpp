/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        long long int a=1,b=n,flag=0;
        long long int mid=(a+b)/2;
        while(guess(mid)!=0)
        {
            mid=(a+b)/2;
            if(guess(mid)==-1)
            {
                b=mid-1;
            }
            else if(guess(mid)==1)
            {
                a=mid+1;
            }
        }

        return mid;
    }
};