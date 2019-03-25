//https://www.lintcode.com/problem/max-chunks-to-make-sorted/description

class Solution {
public:
    /**
     * @param arr: a permutation of N
     * @return: the most number of chunks
     */
    int maxChunksToSorted(vector<int> &arr) {
        // write your code here
        int currmax=arr[0];
        int count=0;
        for(int i=0;i<arr.size();i++){
            currmax=max(currmax,arr[i]);
            if(currmax<=i)
                count++;
        }
        return count;
    }
};
