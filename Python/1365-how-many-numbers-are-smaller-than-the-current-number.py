class Solution:
    def smallerNumbersThanCurrent(self, nums: List[int]) -> List[int]:
        count = [0] * 101
        for i in nums:
            count[i] += 1
        previous = 0
        for i, c in enumerate(count):
            if c !=0:
                count[i] =  previous
                previous += c
        return [count[i] for i in nums]
