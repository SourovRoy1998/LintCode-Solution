//https://www.lintcode.com/problem/lowercase-to-uppercase/description

class Solution {
public:
    /**
     * @param character: a character
     * @return: a character
     */
    char lowercaseToUppercase(char character) {
        // write your code here
        return character+'A'-'a';
    }
};
