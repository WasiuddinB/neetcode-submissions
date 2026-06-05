class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        // for(int i=0;i<=nums.size();i++){
        //     for(int j=i+1;j<=nums.size();j++){
        //         if(nums[i]==nums[j]) return true;
        //     }
        // }
        // return false;

        unordered_set<int> s;
        for(int i=0;i<nums.size();i++){
            if(s.find(nums[i])!=s.end()) return true;
            s.insert(nums[i]);
        }
        return false;
    }
};
