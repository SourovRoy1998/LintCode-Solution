//https://www.lintcode.com/problem/queue-reconstruction-by-height/description

class Solution {
public:
    /**
     * @param people: a random list of people
     * @return: the queue that be reconstructed
     */
    static bool compare(vector<int> a, vector<int> b){
        if(a[0]>b[0])
            return true;
        else if(a[0]<b[0])
            return false;
        return (a[1]<b[1]);
    } 
     
    vector<vector<int>> reconstructQueue(vector<vector<int>> &people) {
        // write your code here
        sort(people.begin(),people.end(),compare);
        
        for(int i=1;i<people.size();i++){
            int j=i;
            while(j>people[j][1]){
                swap(people[j],people[j-1]);
                j--;
            }
        }
        
        return people;
    }
};
