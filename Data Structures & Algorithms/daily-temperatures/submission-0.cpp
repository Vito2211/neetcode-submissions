class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int> result(temperatures.size(), 0);
        stack<int> temps;
        

        for(int i = 0; i < temperatures.size(); i++) {
            while (!temps.empty() &&
                temperatures[i] > temperatures[temps.top()]) {
                int prev = temps.top();
                temps.pop();
                result[prev] = i - prev;
            }
            temps.push(i);
        }
        return result;
    }
};
