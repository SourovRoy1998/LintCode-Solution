//https://www.lintcode.com/problem/jump-game/description

class Solution {
public:
    /**
     * @param A: A list of integers
     * @return: A boolean
     */
    bool canJump(vector<int> &A) {
        // write your code here
        if(A.size()<=1)
            return true;
            
        int safe_next=A[0];
        for(int i=0;i<A.size();i++){
            if(safe_next==0)
                return false;
            if(A[i]>=safe_next)
                safe_next=A[i];
            else
                safe_next--;
        }
        return true;
            
    }
};
