class Solution {
   public:
    string longestCommonPrefix(vector<string>& strs) {
        // if strs[0][0] doesnt match then we skip those indexes
        // we keep the string stored in a constant 
        string ans = "";
        for (int i = 0; i < strs[0].size(); i++) {
            char currentChar = strs[0][i];
            for (int j = 1; j < strs.size(); j++) {
                if (i >= strs[j].size() || strs[j][i] != currentChar) {
                    return ans;
                }
            }
            ans += currentChar;
        }
        return ans;
    }
};