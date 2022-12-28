class Solution:
    def minStoneSum(self, piles: List[int], k: int) -> int:
        heapq._heapify_max(piles)
        for i in range(k):
            heapq._heapreplace_max(piles, (piles[0] + 1) // 2)
        return sum(piles)
