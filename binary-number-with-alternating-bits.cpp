//https://www.lintcode.com/problem/binary-number-with-alternating-bits/description

class Solution {
public:
    /**
     * @param n: a postive Integer
     * @return: if two adjacent bits will always have different values
     */
    bool hasAlternatingBits(int n) {
        // Write your code here
        int x=(n^(n>>1))+1;
        return !(x&(x-1));
    }
};
