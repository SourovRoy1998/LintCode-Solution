//https://www.lintcode.com/problem/validate-binary-search-tree/description

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
     * @param root: The root of binary tree.
     * @return: True if the binary tree is BST, or false
     */
    bool isValidBST(TreeNode * root,long int lvalue=LONG_MIN,long int rvalue=LONG_MAX) {
        // write your code here
        if(!root)
            return true;
        if(root->val<=lvalue || root->val>=rvalue)
            return false;
        return isValidBST(root->left,lvalue,root->val)&&isValidBST(root->right,root->val,rvalue);
    }
};
