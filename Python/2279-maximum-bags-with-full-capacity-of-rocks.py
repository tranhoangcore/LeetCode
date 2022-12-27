class Solution:
    def maximumBags(self, capacity: List[int], rocks: List[int], additionalRocks: int) -> int:
        count = sorted(c - r for c, r in zip(capacity, rocks))[::-1]
        while count and additionalRocks and count[-1] <= additionalRocks:
            additionalRocks -= count.pop()
        return len(rocks) - len(count)
