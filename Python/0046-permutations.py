class Solution:
    def permute(self, nums: List[int]) -> List[List[int]]:
        visited = set()
        res = []
        self.permuteRecursive(nums, visited, [], res)
        return res
    def permuteRecursive(self, nums: List[int], visited: set, sub_set, res):
        if len(sub_set) >= len(nums):
            res.append(sub_set)
        for i in range(len(nums)):
            if i not in visited:
                visited.add(i)
                self.permuteRecursive(nums, visited, sub_set + [nums[i]], res)
                visited.remove(i)