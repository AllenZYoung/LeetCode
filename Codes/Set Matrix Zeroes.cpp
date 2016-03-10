class Solution {
public:
void setZeroes(vector<vector<int> > &matrix) {
    int Col0HasZero = 0, Row0HasZero = 0, NumOfRows = matrix.size(), NumOfCols = matrix[0].size();

    for (int j = 0; j < NumOfCols; j++) {
      if (matrix[0][j] == 0)
        Row0HasZero = 1;
    }
    for (int i = 0; i < NumOfRows; i++) {
        if (matrix[i][0] == 0) 
          Col0HasZero = 1;
        for (int j = 1; j < NumOfCols; j++)
            if (matrix[i][j] == 0)
                matrix[i][0] = matrix[0][j] = 0;
    }
    for (int i = NumOfRows - 1; i >= 0; i--) {
        for (int j = NumOfCols - 1; j >= 1; j--)
            if (matrix[i][0] == 0 || matrix[0][j] == 0)
                matrix[i][j] = 0;
        if (Col0HasZero) 
          matrix[i][0] = 0;
    }
    for (int j = 0; j < NumOfCols; j++) {
      if (Row0HasZero)
        matrix[0][j] = 0;
    }

}
};