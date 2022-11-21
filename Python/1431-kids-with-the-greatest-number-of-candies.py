class Solution:
    def kidsWithCandies(self, candies: List[int], extraCandies: int) -> List[bool]:
        result = []
        maxCandy = max(candies)
        for i in range(0, len(candies)):
            result.append(candies[i] + extraCandies >= maxCandy)
        return result
