//https://www.lintcode.com/problem/base-7/description

class Solution {
public:
    /**
     * @param num: the given number
     * @return: The base 7 string representation
     */
    string convertToBase7(int num) {
        // Write your code here
        string s1="";
        if(num<0){
            s1+='-';
            num=-num;
        }
        string s2="";
        
        while(num){
            s2+=to_string(num%7);
            num/=7;
        }
        reverse(s2.begin(), s2.end());
        s1+=s2;
        
        return s1;
    }
};
