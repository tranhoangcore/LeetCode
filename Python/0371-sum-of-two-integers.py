class Solution:
    def getSum(self, a: int, b: int) -> int:
        mask = 0xffffffff
        while(b !=  0):
            carry = (a & b) & mask
            a = (a ^ b) & mask
            b = (carry << 1) & mask
        if(a>>31) & 1:
            return ~(a^mask)
        return a