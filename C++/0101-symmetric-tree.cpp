/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool browser(TreeNode* left, TreeNode* right){
        if(!left && !right){
            return true;
        }
        if((!left && right) || (left && !right))
            return false;
        if(left->val!=right->val)
            return false;
        return browser(left->right,right->left) && browser(left->left, right->right);
    }
    bool isSymmetric(TreeNode* root) {
        if(!root)
            return true;
        return browser(root->left, root->right);
    }
};