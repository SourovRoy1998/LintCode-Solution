//https://www.lintcode.com/problem/second-max-of-array/description

class Solution {
public:
    /**
     * @param nums: An integer array
     * @return: The second max number in the array.
     */
    int secondMax(vector<int> &nums) {
        // write your code here
        int maxi=max(nums[0],nums[1]);
        int sec_maxi=min(nums[0],nums[1]);
        
        for(int i=2;i<nums.size();i++){
            if(nums[i]>maxi){
                sec_maxi=maxi;
                maxi=nums[i];
            }
            else if(nums[i]>sec_maxi)
                sec_maxi=nums[i];
                
        }
        return sec_maxi;
    }
};
