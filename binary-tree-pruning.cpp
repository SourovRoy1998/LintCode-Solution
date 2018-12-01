//https://www.lintcode.com/problem/binary-tree-pruning/description

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
     * @param root: the root
     * @return: the same tree where every subtree (of the given tree) not containing a 1 has been removed
     */
     
    bool prune(TreeNode*& root){
        if(root==NULL)
            return true;
        bool x1=prune(root->left);
        bool x2=prune(root->right);
        if(x1==true)
            root->left=NULL;
        if(x2==true)
            root->right=NULL;
        if(root->val==0 && x1 && x2)
            return true;
        return false;
        
    } 
    TreeNode * pruneTree(TreeNode * root) {
        // Write your code here
        prune(root);
        return root;
    }
};
