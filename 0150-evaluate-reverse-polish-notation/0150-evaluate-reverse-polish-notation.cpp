class Solution {
public:
    int evalRPN(vector<string>& t) {
        stack<int>s;

        for(int i=0; i<t.size(); i++)
        {
            if(t[i]=="+")
            {
                int num1=s.top();
                s.pop();
                int num2=s.top();
                s.pop();
                s.push(num1+num2);
            }
            else if(t[i]=="-")
            {
                int num1=s.top();
                s.pop();
                int num2=s.top();
                s.pop();
                s.push(num2-num1);
            }
            else if(t[i]=="*")
            {
                int num1=s.top();
                s.pop();
                int num2=s.top();
                s.pop();
                s.push(num2*num1);
            }
            else if(t[i]=="/")
            {
                int num1=s.top();
                s.pop();
                int num2=s.top();
                s.pop();
                s.push(num2/num1);
            }
            else
            {
                s.push(stoi(t[i]));
            }
        }
        return s.top();
    }
};