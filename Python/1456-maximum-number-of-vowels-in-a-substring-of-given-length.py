class Solution:

    def maxVowels(self, s: str, k: int) -> int:
        vowels = {'a', 'e', 'i', 'o', 'u'}
        res = 0
        count = 0
        for i, c in enumerate(s):
            if c in vowels:
                count += 1
            if i >= k and s[i - k] in vowels:
                count -= 1
            res = max(count, res)
        return res
