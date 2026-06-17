class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        bool ans = false;
        unordered_set<int> hash;
        for(int num:nums){
            if(hash.count(num)!=0){
                ans = true;
                break;
            }
            hash.insert(num);
        }
        return ans;
    }
};