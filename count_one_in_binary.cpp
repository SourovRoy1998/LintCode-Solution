//https://www.lintcode.com/problem/count-1-in-binary/description

class Solution {
public:
    /*
     * @param num: An integer
     * @return: An integer
     */
    int countOnes(int num) {
        // write your code here
        int no_of_one=0;
        
        for(int i=0;i<32;i++)
            if(num & 1<<i)
                no_of_one+=1;
        return no_of_one;
    }
};
