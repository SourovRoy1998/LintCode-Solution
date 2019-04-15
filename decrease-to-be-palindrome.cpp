//https://www.lintcode.com/problem/decrease-to-be-palindrome/description

class Solution {
public:
    /**
     * @param s: the string s
     * @return: the number of operations at least
     */
    int numberOfOperations(string &s) {
        // Write your code here
        int ans=0,n=s.length();
        for(int i=0;i<n/2;i++)
            ans+=abs(s[i]-s[n-i-1]);
        return ans;
    }
};
