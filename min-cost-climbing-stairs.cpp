//https://www.lintcode.com/problem/min-cost-climbing-stairs/description

class Solution {
public:
    /**
     * @param cost: an array
     * @return: minimum cost to reach the top of the floor
     */
    int minCostClimbingStairs(vector<int> &cost) {
        // Write your code here
        vector<int> memoize(cost.size()+1,0);
        for(int i=2;i<=cost.size();i++)
            memoize[i]=min(cost[i-2]+memoize[i-2],cost[i-1]+memoize[i-1]);
        return memoize[cost.size()];
        
    }
};
