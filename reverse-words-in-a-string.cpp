//https://www.lintcode.com/problem/reverse-words-in-a-string/description

class Solution {
public:
    /*
     * @param s: A string
     * @return: A string
     */
    string reverseWords(string &s) {
        // write your code here
        stack<char> stk;
        for(char c:s)
            stk.push(c);
        while(stk.top()==' ')
            stk.pop();
        string ans="";
        string temp="";
        while(!stk.empty()){
            if(stk.top()==' '){
                ans+=temp;
                ans+=" ";
                temp="";
                stk.pop();
                while(!stk.empty() && stk.top()==' ')
                    stk.pop();
            }
            else{
                temp=stk.top()+temp;
                stk.pop();
            }
        }
        ans+=temp;
        return ans;
    }
};
