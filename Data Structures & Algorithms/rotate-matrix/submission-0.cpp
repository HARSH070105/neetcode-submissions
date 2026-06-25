class Solution {
public:
    void trans(vector<vector<int>>& matrix){
        int n = matrix.size();
        for(int i = 0; i < n; i++){
            for(int j = i + 1; j < n; j++){
                swap(matrix[i][j], matrix[j][i]);
            }
        }
    }

    void shift(vector<vector<int>>& matrix){
        int n=matrix.size();
        for(int i=0;i<n/2;i++){
            for(int j=0;j<n;j++){
                int temp = matrix[j][i];
                matrix[j][i] = matrix[j][n-i-1];
                matrix[j][n-i-1] = temp;
            }
        }
    }
    void rotate(vector<vector<int>>& matrix) {
        trans(matrix);
        shift(matrix);
    }
};
