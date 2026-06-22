class Solution {
public:
    bool validchar(char ch){
        if ((ch-'0'<=9&&ch-'0'>=0)||(ch-'a'>=0&&ch-'a'<=26)||(ch-'A'>=0&&ch-'A'<=26)){
            return true;
        }
        return false;
    }
    bool isPalindrome(string s) {
        vector<char> wospace;
        for (char ch:s){
            if (!validchar(ch)){
                continue;
            }
            wospace.push_back(tolower(ch));
        }
        for (int i=0;i<wospace.size()/2;i++){
            if (wospace[i]!=wospace[wospace.size()-1-i]){
                return false;
            }
        }
        return true;
    }
};
