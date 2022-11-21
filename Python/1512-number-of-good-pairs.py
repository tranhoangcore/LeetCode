class Solution:
    def numIdenticalPairs(self, nums: List[int]) -> int:
        result = 0
        count = {}
        for i in nums:
            if i in count:
                result += count[i]
                count[i] += 1
            else:
                count[i] = 1
        return result
