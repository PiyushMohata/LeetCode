class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& t) {
        vector<int> result(t.size(), 0);
        stack<int> st;  // Stack to store indices of temperatures.

        for (int i = 0; i < t.size(); i++) {
            // Check if the current temperature is higher than the temperature at the top of the stack.
            while (!st.empty() && t[i] > t[st.top()]) {
                int j = st.top();
                st.pop();
                result[j] = i - j;  // Calculate the number of days to wait.
            }
            st.push(i);  // Push the current index onto the stack.
        }

        return result;
    }
};
