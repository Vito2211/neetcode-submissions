class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> count;
        vector<vector<int>> buskets(nums.size() + 1);
        vector<int> result;

        for(int num : nums) {
            count[num]++;
        }
        for(auto pair : count) {
            buskets[pair.second].push_back(pair.first);
        }
        for(int i = buskets.size() - 1; i >= 0; i--) {
            for(int num : buskets[i]) {
                result.push_back(num);
                if(result.size() == k) return result;
            }
        }
        return result;
    }
};
