class NumMatrix {
private:
        vector<vector<int>> acc_mat;
public:
    NumMatrix(vector<vector<int>>& matrix) {
	// init vector
        int row = matrix.size();
        int col = (row > 0)?matrix[0].size():0;
        acc_mat = vector<vector<int>>(row + 1, vector<int>(col + 1, 0));
        // construct a 2D-vector which is accumulated by matrix
        for(int i = 1; i < row + 1; i++){
            for(int j = 1; j < col + 1; j++){
                // cur_val = mat(==cur_val) + left + top - left-top
                acc_mat[i][j] = matrix[i-1][j-1] + acc_mat[i][j-1] + acc_mat[i-1][j] - acc_mat[i-1][j-1];
            }
        }
    }
    
    int sumRegion(int row1, int col1, int row2, int col2) {
        // ret down-right - left - top + top-left
        return acc_mat[row2 + 1][col2 + 1] - acc_mat[row2 + 1][col1] - acc_mat[row1][col2 + 1] + acc_mat[row1][col1];
    }
};

/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix* obj = new NumMatrix(matrix);
 * int param_1 = obj->sumRegion(row1,col1,row2,col2);
 */
