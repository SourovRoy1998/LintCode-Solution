//https://www.lintcode.com/problem/backpack/description


//O(m*n) time and O(m*n) space complexity
class Solution {
public:
    /**
     * @param m: An integer m denotes the size of a backpack
     * @param A: Given n items with size A[i]
     * @return: The maximum size
     */
    int backPack(int m, vector<int> &A) {
        // write your code here
        int memoize[A.size()+1][m+1];
        for(int i=0;i<=A.size();i++)
            for(int j=0;j<=m;j++){
                if(i==0 || j==0)
                    memoize[i][j]=0;
                else{
                    if(A[i-1]>j)
                        memoize[i][j]=memoize[i-1][j];
                    else
                        memoize[i][j]=max(memoize[i-1][j],memoize[i-1][j-A[i-1]]+A[i-1]);
                }
                
            }
            return memoize[A.size()][m];
    }
};
