class Solution:
    def halvesAreAlike(self, s: str) -> bool:
        s, n, check = s.lower(), len(s), set("aeiou")
        a, b = 0, 0
        for i in s[:n//2]:
            if i in check:
                a += 1
        for i in s[n//2:]:
            if i in check:
                b += 1
        return a == b
