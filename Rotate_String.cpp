//https://www.lintcode.com/problem/rotate-string/description

class Solution {
public:
    /**
     * @param str: An array of char
     * @param offset: An integer
     * @return: nothing
     */
    void rotateString(string &str, int offset) {
        // write your code here
        if(str.empty())
            return;
        offset%=str.length();
        std::reverse(str.begin(),str.begin()+str.length()-offset);
        std::reverse(str.begin()+str.length()-offset,str.end());
        std::reverse(str.begin(), str.end());
        
    }
};
