//https://www.lintcode.com/problem/binary-tree-preorder-traversal/description

/**
 * Definition of TreeNode:
 * class TreeNode {
 * public:
 *     int val;
 *     TreeNode *left, *right;
 *     TreeNode(int val) {
 *         this->val = val;
 *         this->left = this->right = NULL;
 *     }
 * }
 */

class Solution {
public:
    /**
     * @param root: A Tree
     * @return: Preorder in ArrayList which contains node values.
     */
    vector<int> preorderTraversal(TreeNode * root) {
        // write your code here
        vector<int> vtr;
        preorder(root,vtr);
        return vtr;
    }
    
    void preorder(TreeNode * root, vector<int> & vtr) {
        // write your code here
        if(!root)
            return;
        vtr.push_back(root->val);
        preorder(root->left,vtr);
        preorder(root->right,vtr);
        
    }
};
