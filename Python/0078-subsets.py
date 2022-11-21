class Solution:
    def subsets(self, nums: List[int]) -> List[List[int]]:
        def backtrack(first = 0, sub_num = []):
            if len(sub_num) == k:  
                res.append(sub_num[:])
                return
            for i in range(first, n):
                sub_num.append(nums[i])
                backtrack(i + 1, sub_num)
                sub_num.pop()
        
        res = []
        n = len(nums)
        for k in range(n + 1):
            backtrack()
        return res