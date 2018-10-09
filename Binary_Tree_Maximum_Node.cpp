//https://www.lintcode.com/problem/binary-tree-maximum-node/description

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
    /*
     * @param root: the root of tree
     * @return: the max node
     */
    TreeNode * maxNode(TreeNode * root) {
        // write your code here
        if(root==nullptr)
            return nullptr;
        TreeNode* Maxi=root;
        
        TreeNode* left=maxNode(root->left);
        if(left && left->val>Maxi->val)
            Maxi=left;
    
        TreeNode* right=maxNode(root->right);
        if(right && right->val>Maxi->val)
            Maxi=right;
        
        return Maxi;
    }
};
