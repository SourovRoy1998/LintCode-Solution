//https://www.lintcode.com/problem/number-of-1-bits/description

class Solution {
public:
    /**
     * @param n: an unsigned integer
     * @return: the number of â€™1' bits
     */
    int hammingWeight(unsigned int n) {
        // write your code here
        int count=0;
        for(int i=0;i<=31;i++)
            if(n & 1<<i)
                count++;
        return count;
    }
};
