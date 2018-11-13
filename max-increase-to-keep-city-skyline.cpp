//https://www.lintcode.com/problem/max-increase-to-keep-city-skyline/description

class Solution {
public:
    int maxIncreaseKeepingSkyline(vector<vector<int>>& grid) {
        int n=grid.size();
        vector<int>row(n,0);
        vector<int>column(n,0);
        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++){
                row[i]=max(row[i],grid[i][j]);
                column[j]=max(column[j],grid[i][j]);
            }
        int max_increase=0;
        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
                max_increase+=min(row[i],column[j])-grid[i][j];
        return max_increase;
                
        
    }
};
