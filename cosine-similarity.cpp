//https://www.lintcode.com/problem/cosine-similarity/description

class Solution {
public:
    /*
     * @param A: An integer array
     * @param B: An integer array
     * @return: Cosine similarity
     */
    double cosineSimilarity(vector<int> &A, vector<int> &B) {
        // write your code here
        double inner_prod = 0;
        double sq_x=0;
        double sq_y=0;
        for(int i=0;i<A.size();i++){
            inner_prod+=A[i]*B[i];
            sq_x+=A[i]*A[i];
            sq_y+=B[i]*B[i];
        }
        
        if(sq_x==0 || sq_y==0)
            return 2.0000;
        return inner_prod/(pow(sq_x,0.5)*pow(sq_y,0.5));
        
    }
};
