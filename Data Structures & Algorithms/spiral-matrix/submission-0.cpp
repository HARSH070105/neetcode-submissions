class Solution {
public:
    vector<int> ans;
    void shell(int i, int j, int m, int n, vector<vector<int>>& matrix) {
        // top row
        for (int l = j; l <= n - j - 1; l++) {
            ans.push_back(matrix[i][l]);
        }

        // right col
        for (int k = i + 1; k <= m - i - 1; k++) {
            ans.push_back(matrix[k][n - j - 1]);
        }

        // bottom row
        if (i < m - i - 1) {
            for (int l = n - j - 2; l >= j; l--) {
                ans.push_back(matrix[m - i - 1][l]);
            }
        }

        // left col
        if (j < n - j - 1) {
            for (int k = m - i - 2; k > i; k--) {
                ans.push_back(matrix[k][j]);
            }
        }
    }
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        int i = 0;
        int j = 0;

        while (i<m-i && j<n-j) {
            shell(i, j, m, n, matrix);
            i++;
            j++;
        }

        return ans;
    }
};
