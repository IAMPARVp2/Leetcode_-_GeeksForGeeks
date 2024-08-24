class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m = matrix.size();    // Number of rows
        int n = matrix[0].size(); // Number of columns
        
        vector<int> row(m, 0);    // Array to mark rows with zero
        vector<int> col(n, 0);    // Array to mark columns with zero

        // First pass to find which rows and columns need to be set to zero
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (matrix[i][j] == 0) {
                    row[i] = 1;
                    col[j] = 1;
                }
            }
        }

        // Second pass to set the rows and columns to zero
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (row[i] == 1 || col[j] == 1) {
                    matrix[i][j] = 0;
                }
            }
        }
    }
};