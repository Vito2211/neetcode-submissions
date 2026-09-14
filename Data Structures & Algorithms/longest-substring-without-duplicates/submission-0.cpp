class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> window; 
        int maxLen = 0;
        int left = 0;

        for(int right = 0 ; right < s.size(); right++) {
            char c = s[right];
            while(window.count(c)) {
                window.erase(s[left]);
                left++;
            }

            window.insert(c);

            maxLen = max(maxLen, right - left + 1);
        }
        return maxLen;
    }
};
