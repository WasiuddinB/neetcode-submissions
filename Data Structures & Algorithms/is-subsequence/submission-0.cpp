class Solution {
public:
    bool isSubsequence(string s, string t) {
        if(s.size()>t.size()) return false;
        int count = 0;
        for(int i=0;i<t.size();i++){
            if(s[count]==t[i]) count++;
        }
        return s.size()==count;
    }
};