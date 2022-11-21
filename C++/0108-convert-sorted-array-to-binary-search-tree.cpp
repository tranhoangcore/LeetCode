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
    TreeNode* createTree(vector<int>& nums, int left, int right){
        if(left > right)
            return NULL;
        int mid = (left + right) / 2;
        TreeNode* leftNode = createTree(nums, left, mid-1);
        TreeNode* rightNode = createTree(nums, mid+1, right);
        TreeNode* node = new TreeNode(nums[mid]);
        node->left = leftNode;
        node->right = rightNode;
        return node;
    }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return createTree(nums, 0, nums.size() - 1);
    }
};