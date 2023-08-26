class Solution {
public:
    string addBinary(string a, string b) {
        int n = max(a.size(), b.size());
        string ans="";
        char carry='0';
        while (a.size() < n) a = "0" + a;
        while (b.size() < n) b = "0" + b;

        for(int i=a.size()-1; i>=0; i--)
        {
            if(a[i]=='0' && b[i]=='0' && carry=='0')
            {
                ans+='0';
                carry='0';
            }
            else if(((a[i]=='0' && b[i]=='1') || (a[i]=='1' && b[i]=='0')) && carry=='0')
            {
                ans+='1';
                carry='0';
            }
            else if(((a[i]=='0' && b[i]=='1') || (a[i]=='1' && b[i]=='0')) && carry=='1')
            {
                ans+='0';
                carry='1';
            }
            else if(a[i]=='0' && b[i]=='0' && carry=='1')
            {
                ans+='1';
                carry='0';
            }
            else if(a[i]=='1' && b[i]=='1' && carry=='0')
            {
                ans+='0';
                carry='1';
            }
            else if(a[i]=='1' && b[i]=='1' && carry=='1')
            {
                ans+='1';
                carry='1';
            }
        }
        
        reverse(ans.begin(),ans.end());

        if(carry=='1')
        {
            ans='1'+ans;
        }

        return ans;
    }
};