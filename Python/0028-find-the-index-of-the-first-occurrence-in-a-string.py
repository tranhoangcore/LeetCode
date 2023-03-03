class Solution:
    def strStr(self, haystack: str, needle: str) -> int:
        a, b = len(haystack), len(needle)
        for i in range(a-b+1):
            for j in range(b):
                if haystack[i+j] != needle[j]:
                    break
                if j == b - 1:
                    return i
        return -1
