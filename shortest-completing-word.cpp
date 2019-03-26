//https://www.lintcode.com/problem/shortest-completing-word/description

class Solution {
public:
    /**
     * @param licensePlate: a string
     * @param words: List[str]
     * @return: return a string
     */
    string shortestCompletingWord(string &licensePlate, vector<string> &words) {
        // write your code here
        int array1[26]={0};
        for(auto ch : licensePlate)
            if(isalpha(ch))
                array1[tolower(ch)-'a']++;
        
        string result="";
        for(auto s : words){
            int array2[26]={0};
            bool flag=true;
            for(auto ch : s)
                if(isalpha(ch))
                    array2[tolower(ch)-'a']++;
            for(int i=0;i<26;i++)
                if(array1[i]>array2[i])
                    flag=false;
            if(flag)
                if(result=="" || result.length()>s.length())
                    result=s;
            }
        
        return result;
    }
};
