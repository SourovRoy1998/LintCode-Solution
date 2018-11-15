//https://www.lintcode.com/problem/merge-two-binary-trees/description

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
     * @param t1: the root of the first tree
     * @param t2: the root of the second tree
     * @return: the new binary tree after merge
     */
    TreeNode * mergeTrees(TreeNode * t1, TreeNode * t2) {
        // Write your code here
        if(!t1 && !t2)
            return NULL;
        if(!t1 && t2)
            return t2;
        if(t1 && !t2)
            return t1;
        TreeNode* left=mergeTrees(t1->left,t2->left);
        TreeNode* right=mergeTrees(t1->right,t2->right);
        TreeNode* node=new TreeNode(t1->val+t2->val);
        node->left=left;
        node->right=right;
        return node;
        
    }
};
