//https://www.lintcode.com/problem/judge-route-circle/description

class Solution {
public:
    /**
     * @param moves: a sequence of its moves
     * @return: if this robot makes a circle
     */
    bool judgeCircle(string &moves) {
        // Write your code here
        int x=0;
        int y=0;
        for(auto c : moves){
            if(c=='U')
                y++;
            else if(c=='D')
                y--;
            else if(c=='R')
                x++;
            else
                x--;
        }
        return (x==0 && y==0);
    }
};
