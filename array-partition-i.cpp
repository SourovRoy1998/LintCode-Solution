//https://www.lintcode.com/problem/array-partition-i/description

class Solution {
public:
    /**
     * @param nums: an array
     * @return: the sum of min(ai, bi) for all i from 1 to n
     */
    int arrayPairSum(vector<int> &nums) {
        // Write your code here
        int ans=0;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i+=2)
            ans+=nums[i];
        return ans;
        
    }
};
