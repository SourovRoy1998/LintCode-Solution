//https://www.lintcode.com/problem/maximum-product-of-word-lengths/description
//Reference: https://www.programcreek.com/2014/04/leetcode-maximum-product-of-word-lengths-java/


class Solution {
public:
    /**
     * @param words: a string array
     * @return: the maximum product
     */
    int maxProduct(vector<string> &words) {
        // Write your code here
        int n=words.size();
        int arr[n]={0};
        for(int i=0;i<n;i++)
            for(int j=0;j<words[i].length();j++)
                arr[i]|=(1<<(words[i][j]-'a'));
        
        int result=0;
        for(int i=0;i<n;i++)
            for(int j=i+1;j<n;j++)
                if((arr[i]&arr[j])==0){
                    int x=words[i].length()*words[j].length();
                    result=max(result,x);
                }
        
        return result;
        
    }
};
