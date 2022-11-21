class Solution:
    def generateParenthesis(self, n: int) -> List[str]:
        res = []
        def backtracking(currString = "", open = 0, close = 0):
            if len(currString) == 2 * n:
                res.append(currString)
                return
            if open < n:
                backtracking(currString + "(", open + 1, close)
            if close < open:
                backtracking(currString + ")", open, close + 1)
        backtracking()
        return res