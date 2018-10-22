//https://www.lintcode.com/problem/product-of-array-exclude-itself/description

class Solution {
public:
    /*
     * @param nums: Given an integers array A
     * @return: A long long array B and B[i]= A[0] * ... * A[i-1] * A[i+1] * ... * A[n-1]
     */
    vector<long long> productExcludeItself(vector<int> &nums) {
        // write your code here
        int n=nums.size();
        vector<long long> res(n);
        long long int curr=1;
        for(int i=0;i<n;i++){
            res[i]=curr;
            curr=curr*nums[i];
        }
        curr=1;
        for(int i=n-1;i>=0;i--){
            res[i]*=curr;
            curr=curr*nums[i];
        }
        return res;
        
        
        
    }
};
