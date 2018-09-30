## https://www.lintcode.com/problem/maximum-subarray/description

class Solution {
public:
    /**
     * @param nums: A list of integers
     * @return: A integer indicate the sum of max subarray
     */
    int maxSubArray(vector<int> &nums) {
        // write your code here
        int max_so_far=nums[0];
        int curr=nums[0];
        for(int i=1; i<nums.size();i++){
            curr=max(nums[i],curr+nums[i]);
            max_so_far=max(max_so_far,curr);
            
        }
        return max_so_far;
        
        
    }
};
