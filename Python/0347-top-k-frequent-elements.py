class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        if len(nums) == k:
            return nums
        
        map = Counter(nums)
        return heapq.nlargest(k, map.keys(), key=map.get)