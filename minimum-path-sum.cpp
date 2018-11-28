//https://www.lintcode.com/problem/minimum-path-sum/description

class Solution {
public:
    /**
     * @param grid: a list of lists of integers
     * @return: An integer, minimizes the sum of all numbers along its path
     */
    int minPathSum(vector<vector<int>> &grid) {
        // write your code here
        int m=grid.size();
        int n=grid[0].size();
        int memoize[m][n];
        for(int i=0;i<m;i++)
            for(int j=0;j<n;j++){
                if(i==0 && j==0)
                    memoize[i][j]=grid[i][j];
                else if(i==0)
                    memoize[i][j]=memoize[i][j-1]+grid[i][j];
                else if(j==0)
                    memoize[i][j]=memoize[i-1][j]+grid[i][j];
                else
                    memoize[i][j]=min(memoize[i][j-1],memoize[i-1][j])+grid[i][j];
            }
        return memoize[m-1][n-1];
            
    }
};
