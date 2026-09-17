class Solution {
public:
    bool isValid(string s) {
        stack<char> brackets;

        for(char each : s) {
            switch(each) {
                case '(': 
                    brackets.push(each); 
                    break;
                case ')': 
                    if(brackets.empty() || brackets.top() != '(') 
                        return false;
                    brackets.pop();
                    break;
                case '{': 
                    brackets.push(each); 
                    break;
                case '}': 
                    if(brackets.empty() || brackets.top() != '{') 
                        return false;
                    brackets.pop();
                    break;
                case '[': 
                    brackets.push(each); 
                    break;
                case ']': 
                    if(brackets.empty() || brackets.top() != '[') 
                        return false;
                    brackets.pop();
                    break;
            }
        }
        return brackets.empty();
    }
};
