//https://www.lintcode.com/problem/first-unique-character-in-a-string/description


class Solution {
public:
    /**
     * @param str: str: the given string
     * @return: char: the first unique character in a given string
     */
    char firstUniqChar(string &str) {
        // Write your code here
        map<char,int> hmap;
        for(int i=0;i<str.length();i++)
            hmap[str[i]]++;
        for(int i=0;i<str.length();i++)
            if(hmap[str[i]]==1)
                return str[i];
        
    }
};
