class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int sp=0;
        int ep=numbers.size()-1;
        vector<int> answer;
        while (sp<ep){
            if (numbers[sp]+numbers[ep]==target){
                break;
            }
            else if (numbers[sp]+numbers[ep]>target){
                ep--;
            }
            else if (numbers[sp]+numbers[ep]<target){
                sp++;
            }
        }
        answer.push_back(sp+1);
        answer.push_back(ep+1);
        return answer;
    }
};
