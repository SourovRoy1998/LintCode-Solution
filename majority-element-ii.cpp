// https://www.lintcode.com/problem/majority-element-ii/description

class Solution {
public:
    /*
     * @param nums: a list of integers
     * @return: The majority number that occurs more than 1/3
     */
    int majorityNumber(vector<int> &nums) {
        // write your code here
        unordered_map<int,int> hmap;
        for(int x:nums)
            hmap[x]+=1;
        for(int x:nums)
            if(hmap[x]>nums.size()/3)
                return x;
        
    }
};
