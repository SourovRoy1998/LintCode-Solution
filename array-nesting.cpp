//https://www.lintcode.com/problem/array-nesting/description

class Solution {
public:
    /**
     * @param nums: an array
     * @return: the longest length of set S
     */
    int arrayNesting(vector<int> &nums) {
        // Write your code here
        vector<bool> visited(nums.size(),false);
        int maxCount=0;
        for(int i=0;i<nums.size();i++){
            int c=0;
            if(!visited[i]){
                visited[i]=true;
                c++;
                int j=nums[i];
                while(j!=i){
                    c++;
                    j=nums[j];
                    visited[j]=true;
                }
                maxCount=max(maxCount,c);
            }
        }
        return maxCount;
    }
};
