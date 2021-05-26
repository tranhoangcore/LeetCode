# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def diameterOfBinaryTree(self, root: TreeNode) -> int:
        self.res = 0
        def count(root):
            if not root:
                return 0
            left = count(root.left)
            right = count(root.right)
            self.res = max(self.res, left + right)
            return max(left, right) + 1
        count(root)
        return self.res