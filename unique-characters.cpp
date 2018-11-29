//https://www.lintcode.com/problem/unique-characters/description

class Solution {
public:
    /*
     * @param str: A string
     * @return: a boolean
     */
    bool isUnique(string &str) {
        // write your code here
        bool arr[128]={false};
        for(auto x: str){
            if(arr[x])
                return false;
            arr[x]=true;
        }
        return true;
    }
};
