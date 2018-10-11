//https://www.lintcode.com/problem/first-position-of-target/description

class Solution {
public:
    /**
     * @param nums: The integer array.
     * @param target: Target to find.
     * @return: The first position of target. Position starts from 0.
     */
    int binarySearch(vector<int> &nums, int target) {
        // write your code here
        int l=0;
        int r=nums.size()-1;
        int m=0;
        while(l<=r){
            m=(l+r)/2;
            if(nums[m]==target) 
                break;
            else if(nums[m]>target)
                r=m-1;
            else
                l=m+1;
        }
        
        if(nums[m]!=target)
            return -1;
        
        l=0;r=m;
        
        while(l<=r){
            m=(l+r)/2;
            if(nums[m]==target) r=m-1;
            else l=m+1;
        }
        
        return(l);
        
    }
};
