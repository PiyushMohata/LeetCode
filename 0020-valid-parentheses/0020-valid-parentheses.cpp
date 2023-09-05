class Solution {
public:
    bool isValid(string str) {
        stack<char>s;

        for(int i=0; i<str.size(); i++)
        {
            if(str[i]==')')
            {
                if(!s.empty() && s.top()=='(')
                {
                    s.pop();
                }
                else
                    return false;
            }
            else if(str[i]==']')
            {
                if(!s.empty() && s.top()=='[')
                {
                    s.pop();
                }
                else
                    return false;
            }
            else if(str[i]=='}')
            {
                if(!s.empty() && s.top()=='{')
                {
                    s.pop();
                }
                else
                    return false;
            }
            else
                s.push(str[i]);
        }

        return s.empty();
    }
};