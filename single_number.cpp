//https://www.lintcode.com/problem/single-number/description

class Solution {
public:
    /**
     * @param A: An integer array
     * @return: An integer
     */
    int singleNumber(vector<int> &A) {
        // write your code here
        int num=0;
        for(int x:A)
            num^=x;
        return num;
    }
};
