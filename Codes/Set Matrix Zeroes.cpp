class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
      const size_t m = matrix.size();
      const size_t n = matrix[0].size();
      vector<bool> row(m, 0);
      vector<bool> col(n, 0);

      for (size_t i = 0; i < m; i++) {
        for (size_t j = 0; j < n; j++) {
          if (matrix[i][j] == 0) {
            row[i] = col[j] = 1;
          }
        }
      }

      for (size_t i = 0; i < m; i++) {
        if (row[i])
          fill(&matrix[i][0], &matrix[i][0]+n, 0);
      }
      for (size_t j = 0; j < n; j++) {
        if (col[j]) {
          for (size_t i = 0; i < m; i++)  {
            matrix[i][j] = 0;
          }
        }
      }
    }
};