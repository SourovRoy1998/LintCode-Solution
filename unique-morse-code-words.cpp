//https://www.lintcode.com/problem/unique-morse-code-words/description


class Solution {
public:
    /**
     * @param words: the given list of words
     * @return: the number of different transformations among all words we have
     */
    int uniqueMorseRepresentations(vector<string> &words) {
        // Write your code here
        set<string> s;
        vector<string> v={".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        for(auto x : words){
            string temp="";
            for(auto y:x)
                temp+=v[y-'a'];
            s.insert(temp);
        }
        return s.size();
        
    }
};
