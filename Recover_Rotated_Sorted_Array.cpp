// https://www.lintcode.com/problem/recover-rotated-sorted-array/description

class Solution {
public:
    /**
     * @param nums: An integer array
     * @return: nothing
     */
     
    void recoverRotatedSortedArray(vector<int> &nums) {
        // write your code here
        int loc=0;
        for(int i=0;i<nums.size()-1;i++)
            if(nums[i]>nums[i+1]){
                loc=i;
                break;
            }
        if(loc){
            reverse(nums.begin(),nums.begin()+loc+1);
            reverse(nums.begin()+loc+1,nums.end());
            reverse(nums.begin(),nums.end());
        }
    }
};
