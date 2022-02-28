class Solution:
    def maxDepth(self, s: str) -> int:
        res = depth = 0
        for i in s:
            if i == '(':
                depth += 1
                res = max(res, depth)
            if i == ')':
                depth -=1
        return res

