//https://www.lintcode.com/problem/reverse-words-in-a-string-iii/description

class Solution {
public:
    /**
     * @param s: a string
     * @return: reverse the order of characters in each word within a sentence while still preserving whitespace and initial word order
     */
     
    void reverse(string &s,int i, int j){
        while(i<j){
            swap(s[i],s[j]);
            i++;j--;
        }
    } 
    
    string reverseWords(string &s) {
        // Write your code here
        int i=0,j=0;
        for(j=0;j<s.length();j++){
            if(s[j]==' '){
                reverse(s,i,j-1);
                i=j+1;
            }
        }
        reverse(s,i,s.length()-1);
        
        return s;
    }
};
