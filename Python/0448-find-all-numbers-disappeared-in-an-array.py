class Solution:
    def findDisappearedNumbers(self, nums: List[int]) -> List[int]:
        res = []
        hash = set()
        for i in nums:
            hash.add(i)
        for i in range(1, len(nums) + 1):
            if i not in hash:
                res.append(i)
        return res