class Solution:
    def sortedSquares(self, nums: List[int]) -> List[int]:
        res = [0] * len(nums) 
        left = 0
        right  = len(nums) - 1
        for i in reversed(range(len(nums))):
            if abs(nums[left])<abs(nums[right]):
                res[i] = nums[right] ** 2
                right -= 1
            else:
                res[i] = nums[left] ** 2
                left += 1
        return res