//https://www.lintcode.com/problem/rotate-bits-left/description

class Solution {
public:
    /**
     * @param n: a number
     * @param d: digit needed to be rorated
     * @return: a number
     */
    int leftRotate(int n, int d) {
        // write code here
        d=d%32;
        return (n<<d)+(n&(!((-1)<<d))>>(32-d));
    }
};
