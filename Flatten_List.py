
#https://www.lintcode.com/problem/flatten-list/

class Solution(object):
    # @param nestedList a list, each element in the list 
    # can be a list or integer, for example [1,2,[1,2]]
    # @return {int[]} a list of integer
    def __init__(self):
        self.List=[]
    def flatten(self, nestedList):
        # Write your code here
        if type(nestedList)!=list:
            return [nestedList]
        
        for x in nestedList:
            if(type(x)!=list):
                self.List.append(x)
            else:
                self.flatten(x)
        return self.List
