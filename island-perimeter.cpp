//https://www.lintcode.com/problem/island-perimeter/description

class Solution {
public:
    /**
     * @param grid: a 2D array
     * @return: the perimeter of the island
     */
    int islandPerimeter(vector<vector<int>> &grid) {
        // Write your code here
        int m=grid.size();
        int n=grid[0].size();
        if(m==1 && n==1)
            return 4;
        int perimeter=0;
        for(int i=0;i<m;i++)
            for(int j=0;j<n;j++)
                if(grid[i][j]){
                    if(i==0 || grid[i-1][j]==0)
                       perimeter++;
                    if(i==m-1 ||grid[i+1][j]==0)
                       perimeter++;
                    if(j==0 || grid[i][j-1]==0)
                       perimeter++;
                    if(j==n-1 || grid[i][j+1]==0)
                       perimeter++;
                    
                }
        return perimeter;
    }
};
