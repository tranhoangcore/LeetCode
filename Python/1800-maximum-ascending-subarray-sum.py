class Solution:
    def maxAscendingSum(self, nums: List[int]) -> int:
        res = 0
        _max = 0
        for i, x in enumerate(nums):
            if nums[i] <= nums[i-1]:
                res = max(res, _max)
                _max = 0
            _max += nums[i]
        return max(res,_max)