class Solution {
public:
    int calPoints(vector<string>& op) {
        stack<int>s;
        int sum1=0;

        for(int i=0; i<op.size(); i++)
        {
            int temp=0,sum=0;
            if(op[i]=="+" && !s.empty())
            {
                temp=s.top();
                s.pop();
                sum = temp + s.top();
                s.push(temp);
                s.push(sum);
            }
            else if(op[i]=="C" && !s.empty())
            {
                s.pop();
            }
            else if(op[i]=="D" && !s.empty())
            {
                s.push(2*s.top());
            }
            else
            {
                s.push(stoi(op[i]));
            }
        }

        while (!s.empty()) 
        {
            sum1 += s.top();
            s.pop();
        }
    

        return sum1;
    }
};