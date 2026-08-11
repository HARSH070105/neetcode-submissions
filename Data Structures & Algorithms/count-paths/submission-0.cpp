class Solution {
public:
    int uniquePaths(int m, int n) {
        vector<vector<int>> ans(m, vector<int>(n));
        ans[0][0]=1;
        for (int i=0;i<m;i++){
            for (int j=0;j<n;j++){
                if(i>0){
                    ans[i][j] += ans[i-1][j];
                }
                if(j>0){
                    ans[i][j] += ans[i][j-1];
                }
            }
        }
        return ans[m-1][n-1];
    }
};
