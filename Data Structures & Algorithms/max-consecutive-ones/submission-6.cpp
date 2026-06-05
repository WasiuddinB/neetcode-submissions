class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count=0, temp=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1) count++;
            if(nums[i]==0 && (nums[i+1]==1 || i==nums.size()-1)){
                temp=max(temp,count);
                count=0;
            }
        }
        return max(temp,count);
    }
};
