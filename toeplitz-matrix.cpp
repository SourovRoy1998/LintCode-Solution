//https://www.lintcode.com/problem/toeplitz-matrix/description

class Solution {
public:
    /**
     * @param matrix: the given matrix
     * @return: True if and only if the matrix is Toeplitz
     */
    bool isToeplitzMatrix(vector<vector<int>> &matrix) {
        // Write your code here
       for(int i=0;i<matrix.size()-1;i++)
           for(int j=0;j<matrix[0].size()-1;j++){
               if(matrix[i][j]!=matrix[i+1][j+1])
                   return false;
           }
        return true;
    }
};
