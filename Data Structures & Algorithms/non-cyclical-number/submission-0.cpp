class Solution {
public:
    unordered_set<int> seen;
    bool isHappy(int n) {
        if(n==1){
            return true;
        }
        if(seen.count(n)>0||n==0){
            return false;
        }
        else{
            seen.insert(n);
            int nw = 0;
            while (n!=0){
                nw = (nw)+((n%10)*(n%10));
                n=n/10;
            }
            return isHappy(nw);
        }
    }
};
