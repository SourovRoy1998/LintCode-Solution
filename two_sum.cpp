//https://www.lintcode.com/problem/two-sum/description

class Solution {
public:
    /**
     * @param numbers: An array of Integer
     * @param target: target = numbers[index1] + numbers[index2]
     * @return: [index1, index2] (index1 < index2)
     */
    vector<int> twoSum(vector<int> &numbers, int target) {
        // write your code here
        
        unordered_map<int,int>hmap;
        for(int i=0;i<numbers.size();i++){
            if(hmap.find(target-numbers[i])!=hmap.end())
                return {hmap[target-numbers[i]],i};
            hmap[numbers[i]]=i;
        }
    }
};
