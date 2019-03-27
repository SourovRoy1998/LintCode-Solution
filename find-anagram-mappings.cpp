//https://www.lintcode.com/problem/find-anagram-mappings/description

class Solution {
public:
    /**
     * @param A: lists A
     * @param B: lists B
     * @return: the index mapping
     */
    vector<int> anagramMappings(vector<int> &A, vector<int> &B) {
        // Write your code here
        vector<int> result(A.size());
        map<int,int> temp;
        for(int i=0;i<B.size();i++)
            temp[B[i]]=i;
        for(int i=0;i<A.size();i++)
            result[i]=temp[A[i]];
            
        return result;
    }
};
