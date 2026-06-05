class Solution {
public:
    int scoreOfString(string s) {
        int ans = 0;
        // The values i want, i can get from int(s[i])
        for(int i = 0; i < s.size() - 1; i++){
            int ascii_num = int(s[i]);
            int ascii_adj_num = int(s[i+1]);
            if(ascii_num > ascii_adj_num){
                ans += (ascii_num - ascii_adj_num);
            } else {
                ans += (ascii_adj_num - ascii_num);
            }
        }
        return ans;
    }
};