class Solution {
public:
    int divisorSubstrings(int num, int k) {
        int b=0,count=0;
        string s=to_string(num);
        if(s.size()==1)
            return 1;
        while(b<s.size())
        {
            string str="";
            int a=0;
            int x=k;
            if(s.size()-b>=k)
            {
                while(x--)
                {
                    str+=s[b];
                    b++;
                }
                a=stoi(str);
            }
            else
            {
                break;
            }
            
            if(a!=0 && num%a==0 && str[str.size()-1]!='\0')
            {
                count++;
            }
            b-=k-1;
        }
        return count;
    }
};