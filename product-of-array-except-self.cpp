//https://www.lintcode.com/problem/product-of-array-except-self/description

class Solution {
public:
    /**
     * @param nums: an array of integers
     * @return: the product of all the elements of nums except nums[i].
     */
    vector<int> productExceptSelf(vector<int> &nums) {
        // write your code here
        int n=nums.size();
        vector<int> result(n);
        result[0]=nums[0];
        int mul=1;
        for(int i=1;i<n;i++){
            result[i]=nums[i]*result[i-1];
        }
        for(int i=n-1;i>0;i--){
            result[i]=result[i-1]*mul;
            mul*=nums[i];
        }
        result[0]=mul;
        
        return result;
    }
};
