class Solution {
public:
    int countSeniors(vector<string>& details) {
        int count=0;
        for(int i=0;i<details.size();i++){
            char ch1=details[i][11];
            char ch2=details[i][12];
            int num = (ch1-'0')*10 + (ch2-'0');
            if(num>60) count++;
        }
        return count;
    }
};