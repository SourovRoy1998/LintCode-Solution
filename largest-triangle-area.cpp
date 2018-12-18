//https://leetcode.com/problems/largest-triangle-area/

class Solution {
public:
    
    double area(vector<int> x,vector<int>y,vector<int>z){
        double ans=(x[0]*y[1]+y[0]*z[1]+z[0]*x[1]-y[0]*x[1]-z[0]*y[1]-x[0]*z[1])/(double)2;
        return abs(ans);
    }
    
    double largestTriangleArea(vector<vector<int>>& points) {
        double maxi=0;
        
        
        for(int i=0;i<points.size();i++)
             for(int j=i;j<points.size();j++)
                  for(int k=j;k<points.size();k++){
                      maxi=max(maxi,area(points[i],points[j],points[k]));
                  }
        return maxi;
    }
};
