//https://www.lintcode.com/problem/greatest-common-divisor/description

class Solution {
public:
    /**
     * @param a: the given number
     * @param b: another number
     * @return: the greatest common divisor of two numbers
     */
    int gcd(int a, int b) {
        // write your code here
        if(a%b==0)
            return b;
        return gcd(b,a%b);
    }
};
