//https://www.lintcode.com/problem/johns-backyard-garden/description

class Solution {
public:
    /**
     * @param x: the wall's height
     * @return: YES or NO
     */
    string isBuild(int x) {
        // write you code here
        if(x<=7)
            if(x==3 || x==7)
            return "YES";
        else
            return "NO";
            
        int arr[x+1]={0};
        arr[3]=arr[7]=1;
        
        for(int i=8;i<=x;i++){
            if(arr[i-3] || arr[i-7])
                arr[i]=1;
        }
    return (arr[x]==1)? "YES":"NO";
    }
};
