class Solution:
    def partition(self, s: str) -> List[List[str]]:
       res = []
       path = []
       self.dfs(s, 0, path, res)
       return res
    def dfs(self, s: str, index: int, path: List[str], res: List[List[str]]):
        if index == len(s):
            res.append(path)
            return
        for i in range(index, len(s)):
            if self.isPalindrome(s[index:i+1]):
                self.dfs(s, i+1, path + [s[index:i+1]], res)
    def isPalindrome(self, s: str) -> bool:
        for i in range(len(s) // 2):
            if(s[i] != s[len(s) -1 - i]):
                return False
        return True