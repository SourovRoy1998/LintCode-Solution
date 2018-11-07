//https://www.lintcode.com/problem/jewels-and-stones/description

class Solution {
public:
    /**
     * @param J: the types of stones that are jewels
     * @param S: representing the stones you have
     * @return: how many of the stones you have are also jewels
     */
    int numJewelsInStones(string &J, string &S) {
        // Write your code here
        unordered_map<char,bool> hmap;
        int count=0;
        for(int i=0;i<J.size();i++)
            hmap[J[i]]=true;
        
        for(int i=0;i<S.size();i++)
            if(hmap.find(S[i])!=hmap.end())
                count++;
        
        return count;
        
    }
};
