//https://www.lintcode.com/problem/keyboard-row/description

class Solution {
public:
    /**
     * @param words: a list of strings
     * @return: return a list of strings
     * 
     */
    bool isExist(string s, char ch){
        for(int i=0;i<s.length();i++)
            if(s[i]==tolower(ch))
                return true;
        return false;
    } 
    
     
    vector<string> findWords(vector<string> &words) {
        // write your code here
        vector<string> result;
        string s1="qwertyuiop";
        string s2="asdfghjkl";
        string s3="zxcvbnm";
        
        for(string word:words){
            int flag=1;
            for(int i=0;i<word.length();i++)
                if(!isExist(s1,word[i]))
                    flag=0;
            if(flag==1)
                result.push_back(word);
                
                
            flag=1;
            for(int i=0;i<word.length();i++)
                if(!isExist(s2,word[i]))
                    flag=0;
            if(flag==1)
                result.push_back(word);
                
            flag=1;
            for(int i=0;i<word.length();i++)
                if(!isExist(s3,word[i]))
                    flag=0;
            if(flag==1)
                result.push_back(word);
        }
        
        return result;
        
    }
};
