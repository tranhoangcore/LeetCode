class Solution:
    def partition(self, nums, left, right):
        tmp = nums[right]
        i = left
        for j in range(left, right):
            if nums[j] < tmp:
                nums[i], nums[j] = nums[j], nums[i]
                i = i +1
        nums[i], nums[right] = nums[right], nums[i]
        return i
    def quicksort(self, nums, left, right):
        if left > right:
            return
        i = self.partition(nums, left, right)
        self.quicksort(nums, left, i -1)
        self.quicksort(nums, i+1, right)
    def sortArray(self, nums: List[int]) -> List[int]:
        if len(nums) <= 1:
            return nums
        self.quicksort(nums, 0, len(nums) - 1)
        return nums
