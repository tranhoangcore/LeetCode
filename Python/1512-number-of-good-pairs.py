class Solution:
    def numIdenticalPairs(self, nums: List[int]) -> int:
        result = 0
        count = {}
        for i in nums:
            count[i] = count[i] + 1
            result =  result + count[i]
        return result
