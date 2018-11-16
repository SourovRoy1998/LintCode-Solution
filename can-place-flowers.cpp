//https://www.lintcode.com/problem/can-place-flowers/

class Solution {
public:
    /**
     * @param flowerbed: an array
     * @param n: an Integer
     * @return: if n new flowers can be planted in it without violating the no-adjacent-flowers rule
     */
    bool canPlaceFlowers(vector<int> &flowerbed, int n) {
        // Write your code here
        int count=0;
        int max_possible=0;
        for(int i=0;i<flowerbed.size();i++){
            if(flowerbed[i]==0)
                count++;
            else{
                max_possible+=(count/2);
                count=0;
            }
        }
        return max_possible>=n;
    }
};
