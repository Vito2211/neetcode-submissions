class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {    
        unordered_map<int, int> seen;

        for(int i = 0; i < nums.size(); i++) {

            int num = nums[i];
            int cump = target - num;

            if(seen.count(cump)) {
                return {seen[cump], i};
            }
            seen[num] = i;
        }
        return {};
    }
};
