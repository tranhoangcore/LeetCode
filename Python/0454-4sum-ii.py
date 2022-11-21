class Solution:
    def fourSumCount(self, nums1: List[int], nums2: List[int], nums3: List[int], nums4: List[int]) -> int:
        res = 0
        hash = {}
        for i in nums3:
            for j in nums4:
                sum = i + j
                if sum in hash:
                    hash[sum] += 1
                else:
                    hash[sum] = 1
        for i in nums1:
            for j in nums2:
                tmp = 0 - i - j
                if tmp in hash:
                    res += hash[tmp]
        return res