https://www.lintcode.com/problem/flood-fill/description

class Solution {
public:
    /**
     * @param image: a 2-D array
     * @param sr: an integer
     * @param sc: an integer
     * @param newColor: an integer
     * @return: the modified image
     */
    void Fill(vector<vector<int>> &image, int sr, int sc, int newColor, int oldColor) {
        // Write your code here
        int n=image[0].size();
        int m=image.size();
        if(sr>=m || sc>=n || sr<0 || sc<0)
            return;
        
        else if(image[sr][sc]!=newColor && image[sr][sc]==oldColor){
            image[sr][sc]=newColor;
            Fill(image,sr+1,sc, newColor,oldColor);
            Fill(image,sr,sc-1, newColor,oldColor);
            Fill(image,sr-1,sc, newColor,oldColor);
            Fill(image,sr,sc+1, newColor,oldColor);
        }
    }
     
     
    vector<vector<int>> floodFill(vector<vector<int>> &image, int sr, int sc, int newColor) {
        // Write your code here
        int oldColor=image[sr][sc];
        Fill(image,sr,sc,newColor,oldColor);
        return image;
            
    }
};
