//https://www.lintcode.com/problem/compare-strings/description

class Solution {
public:
    /**
     * @param A: A string
     * @param B: A string
     * @return: if string A contains all of the characters in B return true else return false
     */
    bool compareStrings(string &A, string &B) {
        // write your code here
        unordered_map<char,int> hmap;
        for(char x:A)
            hmap[x]++;
        for(char x:B){
            hmap[x]--;
            if(hmap[x]<0)
                return false;
            }
        return true;
        
    }
};
