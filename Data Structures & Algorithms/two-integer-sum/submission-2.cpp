class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> hash(20000001,0);
        for (int i: nums){
            hash[10000000+i]++;
        }

        vector<int> ans(2,0);
        int fir = -1;
        for (int i=0;i<nums.size();i++){
            if (hash[(target-nums[i])+10000000]>0){
                if(target-nums[i]==nums[i]){
                    if(hash[target-nums[i]+10000000]<=1){
                        continue;
                    }
                }
                fir = nums[i];
                ans[0] = i;
                break; 
            }
        }
        for (int i=ans[0];i<nums.size();i++){
            if(nums[i]==target-fir){
                ans[1] = i;
            }
        }
        return ans;
    }
};
