class Solution {
public:
    bool canJump(vector<int>& nums) {
        int max_len = 0;
        int n = nums.size();
        for (int i=0;i<n;i++){
            if (i<=max_len){
                max_len = max(max_len, i+nums[i]);
            }
        }
        if(max_len>=nums.size()-1){
            return true;
        }
        return false;
    }
};
