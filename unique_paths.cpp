//https://www.lintcode.com/problem/unique-paths/description

class Solution {
public:
    /**
     * @param m: positive integer (1 <= m <= 100)
     * @param n: positive integer (1 <= n <= 100)
     * @return: An integer
     */
     
    int uniquePaths(int m, int n) {
        // write your code here
        int arr[m][n];
        for(int i=0;i<m;i++)
            for(int j=0;j<n;j++){
                if(i==0 || j==0)
                    arr[i][j]=1;
                else
                    arr[i][j]=arr[i][j-1]+arr[i-1][j];
            }
        return arr[m-1][n-1];
    }
};
