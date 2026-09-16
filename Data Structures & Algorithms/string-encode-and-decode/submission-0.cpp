class Solution {
public:


    string encode(vector<string>& strs) {
        string s;
        for(string word : strs) {
            s += to_string(word.size()) + "#" + word; 
        }
        return s;
    }

    vector<string> decode(string s) {
        vector<string> strs;
        int count = 0;
        int i = 0;
        while(i < s.size()) {
            int len = 0;

            while(s[i] != '#') {
                len = len * 10 + (s[i] - '0');
                i++;
            }
            i++;

            string word;

            for(int d = 0; d < len; d++) {
                word += s[i];
                i++; 
            }


            strs.push_back(word);
        }
        return strs;
    }
};
