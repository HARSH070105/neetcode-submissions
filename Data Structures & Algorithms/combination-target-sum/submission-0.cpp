class Solution {
public:
    vector<vector<int>> ans;
    vector<int> temp;

    void trial(vector<int>& nums, int target, int idx){
        if(target == 0){
            ans.push_back(temp);
            return;
        }
        for(int i=idx; i<nums.size();i++){
            if(nums[i]>target){
                break;
            }
            temp.push_back(nums[i]);
            trial(nums, target-nums[i], i);
            temp.pop_back();
        }
    }

    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        trial(nums,target,0);
        return ans;
    }
};
