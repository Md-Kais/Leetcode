class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> s;

        for (const string& e : tokens) {
            if (e == "+" || e == "-" || e == "*" || e == "/") {
                int p2 = s.top(); s.pop();
                int p1 = s.top(); s.pop();

                int eval = 0;
                if (e == "+") eval = p1 + p2;
                else if (e == "-") eval = p1 - p2;
                else if (e == "*") eval = p1 * p2;
                else eval = p1 / p2;
                s.push(eval);
            } else {
                s.push(stoi(e));
            }
        }

        return s.top();
    }
};