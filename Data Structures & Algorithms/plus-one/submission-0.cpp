class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int currcarry=1;
        for (int i=digits.size()-1;i>=0;i--){
            digits[i] += currcarry;
            currcarry = digits[i]/10;
            digits[i] %= 10;
        }
        if (currcarry>0){
            vector <int> ans;
            ans.push_back(currcarry);
            for(int i:digits){
                ans.push_back(i);
            }
            return ans;
        }
        return digits;
    }
};
