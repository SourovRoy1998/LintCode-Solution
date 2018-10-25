//https://www.lintcode.com/problem/binary-tree-postorder-traversal/description

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
     * @return: Postorder in ArrayList which contains node values.
     */
     void postorder(TreeNode * root, vector<int> &result) {
        // write your code here
        if(!root)
            return;
        postorder(root->left,result);
        postorder(root->right,result);
        result.push_back(root->val);
    } 
     
    vector<int> postorderTraversal(TreeNode * root) {
        // write your code here
        vector<int> result;
        postorder(root,result);
        return result;
    }
};
