class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n = temperatures.size();
        vector<int> result(n, 0); // Initialize the result vector with 0s
        stack<int> stk; // Use stack to store indices

        // Iterate from the end to the beginning
        for (int i = n - 1; i >= 0; --i) {
            // Pop elements from the stack until finding a warmer temperature
            while (!stk.empty() && temperatures[i] >= temperatures[stk.top()]) {
                stk.pop();
            }

            // If stack is not empty, then the top element is the next warmer temperature
            if (!stk.empty()) {
                result[i] = stk.top() - i;
            }

            // Push current index onto stack
            stk.push(i);
        }

        return result;
    }
};

auto init = []() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 'c';
}();