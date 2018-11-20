//https://www.lintcode.com/problem/count-complete-tree-nodes/description

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
     * @param root: root of complete binary tree
     * @return: the number of nodes
     */
    int countNodes(TreeNode * root) {
        // write your code here
        if(!root)
            return 0;
        else
            return countNodes(root->left)+countNodes(root->right)+1;
    }
};
