//https://www.lintcode.com/problem/different-ways-to-add-parentheses/description


class Solution {
public:
    /**
     * @param input: a string
     * @return: return List[int]
     */
     
    bool isOp(char c){
        if(c=='+' || c=='-' || c=='*')
            return true;
        return false;
    }
    
    vector<int> diffWays(string input, map<string, vector<int>> hmap){
        if(hmap.find(input)!=hmap.end())
            return hmap[input];
        vector<int> result;
        
        vector<int> left, right;
        for(int i=0;i<input.length();i++){
            if(isOp(input[i])){
                left = diffWays(input.substr(0,i),hmap);
                right = diffWays(input.substr(i+1),hmap);
            }    
            
            if(input[i]=='+')
                for(int j=0;j<left.size();j++)
                    for(int k=0;k<right.size();k++)
                        result.push_back(left[j]+right[k]);
            else if(input[i]=='-')
                for(int j=0;j<left.size();j++)
                    for(int k=0;k<right.size();k++)
                        result.push_back(left[j]-right[k]);
            if(input[i]=='*')
                for(int j=0;j<left.size();j++)
                    for(int k=0;k<right.size();k++)
                        result.push_back(left[j]*right[k]);
                    
                    
        }
        
        if(result.empty())
            result.push_back(atoi(input.c_str()));
        hmap[input]=result;
        
        return result;
        
    }
    
    
    vector<int> diffWaysToCompute(string &input) {
        // write your code here
        map<string, vector<int>> hmap;
        return diffWays(input, hmap);
        
    }
};
