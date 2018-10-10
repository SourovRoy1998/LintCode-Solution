//https://www.lintcode.com/problem/minimum-subarray/description

class Solution {
public:
    /*
     * @param nums: a list of integers
     * @return: A integer indicate the sum of minimum subarray
     */
    int minSubArray(vector<int> &nums) {
        // write your code here
        int globalmini=nums[0];
        int currentmin=nums[0];
        
        for(int i=1;i<nums.size();i++){
            currentmin=min(currentmin+nums[i],nums[i]);
            globalmini=min(globalmini,currentmin);
        }
        return globalmini;
    }    
        
};
