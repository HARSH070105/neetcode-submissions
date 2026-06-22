class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int l = nums.size();
        vector<int> prefix(l);
        vector<int> postfix(l);
        vector<int> answer(l);
        prefix[0] = 1;
        for(int i=1;i<l;i++){
            prefix[i] = prefix[i-1]*nums[i-1];
        }
        postfix[l-1] = 1;
        for(int i=l-2;i>=0;i--){
            postfix[i] = postfix[i+1]*nums[i+1];
        }
        for(int i=0;i<l;i++){
            answer[i] = prefix[i]*postfix[i];
        }
        return answer;
    }
};
