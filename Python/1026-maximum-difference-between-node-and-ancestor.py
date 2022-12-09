# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def maxAncestorDiff(self, root: Optional[TreeNode]) -> int:
        def dfs(root, curMin = 10 ** 5, curMax = 0) -> int:
            if not root:
                return curMax - curMin
            curMin, curMax = min(curMin, root.val), max(curMax, root.val)
            return max(dfs(root.left, curMin, curMax), dfs(root.right, curMin, curMax))
        return dfs(root)
