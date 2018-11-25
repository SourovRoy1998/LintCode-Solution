//https://www.lintcode.com/problem/number-complement/description

class Solution {
public:
    /**
     * @param num: an integer
     * @return: the complement number
     */
    int findComplement(int num) {
        // Write your code here
        int ans=0;
        for(int i=0;i<31;i++){
            if(!(num & (1<<i)) && num>=(1<<i))
                ans+=(1<<i);
        }
        return ans;
    }
};
