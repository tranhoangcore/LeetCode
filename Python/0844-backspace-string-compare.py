class Solution:
    def removeBackspace(self, s: str):
        ans = []
        for c in s:
            if c != '#':
                ans.append(c)
            elif ans:
                ans.pop()
        return "".join(ans)
    def backspaceCompare(self, s: str, t: str) -> bool:
        return self.removeBackspace(s) == self.removeBackspace(t)