class Solution {
public:
    void colzero(vector<vector<int>>& matrix, int colpos) {
        for (int i = 0; i < matrix.size(); i++) {
            matrix[i][colpos] = 0;
        }
    }

    void rowzero(vector<vector<int>>& matrix, int rowpos) {
        for (int j = 0; j < matrix[0].size(); j++) {
            matrix[rowpos][j] = 0;
        }
    }

    void setZeroes(vector<vector<int>>& matrix) {
        int rows = matrix.size();
        int cols = matrix[0].size();

        bool row0 = false, col0 = false;

        for (int j = 0; j < cols; j++) {
            if (matrix[0][j] == 0) {
                row0 = true;
                break;
            }
        }

        for (int i = 0; i < rows; i++) {
            if (matrix[i][0] == 0) {
                col0 = true;
                break;
            }
        }

        for (int i = 1; i < rows; i++) {
            for (int j = 1; j < cols; j++) {
                if (matrix[i][j] == 0) {
                    matrix[i][0] = 0;
                    matrix[0][j] = 0;
                }
            }
        }

        for (int i = 1; i < rows; i++) {
            if (matrix[i][0] == 0) {
                rowzero(matrix, i);
            }
        }

        for (int j = 1; j < cols; j++) {
            if (matrix[0][j] == 0) {
                colzero(matrix, j);
            }
        }

        if (row0){
            rowzero(matrix, 0);
        }
        if (col0){
            colzero(matrix, 0);
        }
    }
};