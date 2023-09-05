class Solution {
public:
    int calPoints(vector<string>& op) {
        stack<int>s;//create a stack
        int sum1=0;

        for(int i=0; i<op.size(); i++)
        {
            int temp=0,sum=0;
            if(op[i]=="+" && !s.empty())
            {
                // we need to make a temporary variable in order to access the value before top
                // store the value of top in temp and then pop the top value so that we can get the new top value and perform sum
                  
                temp=s.top();
                s.pop();
                sum = temp + s.top();
                s.push(temp);// again push the temp variable in the stack
                s.push(sum);// push the sum we got
            }
            else if(op[i]=="C" && !s.empty())// it is important to check if the stack value is not empty
            {
                // if the value is C then we simply need to pop from stack
                s.pop();
            }
            else if(op[i]=="D" && !s.empty())
            {
                s.push(2*s.top());// push the value 2 times the top value
            }
            else
            {
                s.push(stoi(op[i]));// convert string value into integer using stoi function and push into stack
            }
        }

        while (!s.empty()) // iterate through stack till its empty and do the sum
        {
            sum1 += s.top();
            s.pop();
        }
    

        return sum1;
    }
};