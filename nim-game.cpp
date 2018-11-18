//https://www.lintcode.com/problem/nim-game/description

class Solution {
public:
    /**
     * @param n: an integer
     * @return: whether you can win the game given the number of stones in the heap
     */
    bool canWinNim(int n) {
        // Write your code here
        return !(n%4==0);
    }
};
