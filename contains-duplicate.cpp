//https://www.lintcode.com/problem/contains-duplicate/description

class Solution {
public:
    /**
     * @param nums: the given array
     * @return: if any value appears at least twice in the array
     */
    bool containsDuplicate(vector<int> &nums) {
        // Write your code here
        return nums.size() > set<int> (nums.begin(),nums.end()).size();
    }
};
