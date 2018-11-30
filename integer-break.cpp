//https://www.lintcode.com/problem/integer-break/description

class Solution {
public:
    /**
     * @param n: a positive integer n
     * @return: the maximum product you can get
     */
    int integerBreak(int n) {
        // Write your code here
        int product=1;
        if(n==2)
            return 1;
        if(n==3)
            return 2;
        while(n>4){
            product*=3;
            n-=3;
        }
        return product*n;
    }
};
