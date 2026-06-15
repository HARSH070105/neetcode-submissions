class Solution {
public:
    vector<int> countBits(int n) {
        // 512,256,128,64,32,16,8,4,2,1
        vector<int> answer;
        for (int i=0;i<=n;i++){
            int ans = 0;
            int j=i;
            while(j!=0){
                for(int p=9;p>=0;p--){
                    if (j/(1<<p)>=1){
                        ans++;
                        j=j-(1<<p);
                    }
                }
            }
            answer.push_back(ans);
        }
        return answer;
    }
};
