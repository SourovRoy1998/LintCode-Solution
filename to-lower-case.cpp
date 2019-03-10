//https://www.lintcode.com/problem/to-lower-case/description

class Solution {
public:
    /**
     * @param str: the input string
     * @return: The lower case string
     */
    string toLowerCase(string &str) {
        // Write your code here
        for(int i=0;i<str.length();i++)
            if(str[i]>='A' && str[i]<='Z')
                str[i]=str[i]+'a'-'A';
        return str;
    }
};
