//https://www.lintcode.com/problem/sum-of-square-numbers/description

class Solution {
public:
    /**
     * @param num: the given number
     * @return: whether whether there're two integers
     */
    bool checkSumOfSquareNumbers(int num) {
        // write your code here
        if(num<0)
            return false;
        int a=sqrt(num);
        int b=sqrt(num-a*a);
        while(a>=b){
            if(a*a+b*b==num) return true;
            a--;
            b=sqrt(num-a*a);
        }
        return false;
    }
};
