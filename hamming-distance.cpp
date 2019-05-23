//https://www.lintcode.com/problem/hamming-distance/

class Solution {
public:
    /**
     * @param x: an integer
     * @param y: an integer
     * @return: return an integer, denote the Hamming Distance between two integers
     */
    int hammingDistance(int x, int y) {
        // write your code here  
        int count=0;
        for(int i=0;i<32;i++){
            if(((x&(1<<i))!=(y&(1<<i))))
                count++;
        }
        return count;
    }
};
