class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        int sum = 0;
        stack<int> base; 
        int buffer;
        for(string token : tokens) {
            if (token != "+" && token != "-" && 
                token != "*" && token != "/") {
                base.push(stoi(token));
            } else if (token == "+") {
                buffer = base.top();
                base.pop();
                base.top() = base.top() + buffer;
                sum = base.top();
            } else if (token == "-") {
                buffer = base.top();
                base.pop();
                base.top() = base.top() - buffer;
                sum = base.top();
            } else if (token == "*") {
                buffer = base.top();
                base.pop();
                base.top() = base.top() * buffer;
                sum = base.top();
            } else if (token == "/") {
                buffer = base.top();
                base.pop();
                base.top() = base.top() / buffer;
                sum = base.top();
            }
            sum = base.top();
        }
        return sum;
    }
};
