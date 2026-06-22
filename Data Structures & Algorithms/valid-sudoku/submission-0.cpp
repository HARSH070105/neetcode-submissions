class Solution {
public:
    bool test_horizontal(vector<vector<char>>& board){
        for (int i = 0; i < 9; i++) {
            vector<int> chk(9, 0);

            for (int j = 0; j < 9; j++) {
                if (board[i][j] == '.'){
                    continue;
                }
                chk[board[i][j] - '1']++;
            }

            for (int x : chk) {
                if (x > 1) {
                    return false;
                }
            }
        }
        return true;
    }

    bool test_vertical(vector<vector<char>>& board){
        for (int i = 0; i < 9; i++) {
            vector<int> chk(9, 0);

            for (int j = 0; j < 9; j++) {
                if (board[j][i] == '.'){
                    continue;
                }

                chk[board[j][i] - '1']++;
            }

            for (int x : chk) {
                if (x > 1){
                    return false;
                }
            }
        }
        return true;
    }

    bool test_square(vector<vector<char>>& board){
        for (int vmove = 0; vmove <= 6; vmove += 3) {
            for (int hmove = 0; hmove <= 6; hmove += 3) {

                vector<int> chk(9, 0);

                for (int i = vmove; i < vmove + 3; i++) {
                    for (int j = hmove; j < hmove + 3; j++) {

                        if (board[i][j] == '.'){
                            continue;
                        }

                        chk[board[i][j] - '1']++;
                    }
                }

                for (int x : chk) {
                    if (x > 1){
                        return false;
                    }
                }
            }
        }
        return true;
    }

    bool isValidSudoku(vector<vector<char>>& board) {
        return test_horizontal(board) &&
               test_vertical(board) &&
               test_square(board);
    }
};