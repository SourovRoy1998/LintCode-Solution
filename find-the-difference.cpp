//https://www.lintcode.com/problem/find-the-difference/description

class Solution {
public:
    /**
     * @param s: a string
     * @param t: a string
     * @return: the letter that was added in t
     */
    char findTheDifference(string &s, string &t) {
        // Write your code here
        char c=0;
        for(auto x:t)
            c+=x;
        for(auto x:s)
            c-=x;
        return c;
    }
};
