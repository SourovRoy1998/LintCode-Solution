//https://www.lintcode.com/problem/binary-tree-inorder-traversal/description

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
     * @return: Inorder in ArrayList which contains node values.
     */
    vector<int> inorderTraversal(TreeNode * root) {
        // write your code here
        vector<int> result;
        inorder(root,result);
        return result;
    }
    
    void inorder(TreeNode * root, vector<int> &result) {
        // write your code here
        if(!root)
            return;
        inorder(root->left,result);
        result.push_back(root->val);
        inorder(root->right,result);
            
    }
};
