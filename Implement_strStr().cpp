//https://www.lintcode.com/problem/implement-strstr/

class Solution {
public:
    /**
     * @param source: 
     * @param target: 
     * @return: return the index
     */
    int strStr(string &source, string &target) {
        // Write your code here
        int m=source.length();
        int n=target.length();
        
        if(n>m)
            return -1;
            
        if(n==0)
            return 0;
        
        int flag=-1;
        for(int i=0;i<=m-n;i++){
            flag=i;
            for(int j=i;j<i+n;j++)
                if(source[j]!=target[j-i]){
                    flag=-1;
                    break;
                }
            if(flag==i)
                return flag;
        }
        return flag;
            
    }
};
