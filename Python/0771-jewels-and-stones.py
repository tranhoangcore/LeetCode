class Solution:
    def numJewelsInStones(self, jewels: str, stones: str) -> int:
        result = 0
        SetC = set(jewels)
        for c in stones:
            if( c in SetC):
                result+=1
        return result
