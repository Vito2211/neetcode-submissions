class MinStack {
private:
    stack<int> values;
    stack<int> mins;
public:
    MinStack() {
        
    }
    
    void push(int val) {
        values.push(val);
        if(mins.empty() || mins.top() > val) {
            mins.push(val);
        } else {
            mins.push(mins.top());
        }
    }
    
    void pop() {
        values.pop();
        mins.pop();
    }
    
    int top() {
        return values.top();
    }
    
    int getMin() {
        return mins.top();
    }
};
