//https://www.lintcode.com/problem/sum-of-left-leaves/description

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
     * @param root: t
     * @return: the sum of all left leaves
     */
    int sumOfLeftLeaves(TreeNode * root) {
        // Write your code here
        if(!root || (!root->left && !root->right))
            return 0;
        if(root->left && (!root->left->left && !root->left->right))
            return sumOfLeftLeaves(root->right)+root->left->val;
        else 
            return sumOfLeftLeaves(root->left)+sumOfLeftLeaves(root->right);
    }
};
