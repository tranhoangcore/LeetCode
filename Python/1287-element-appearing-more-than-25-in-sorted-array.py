class Solution:
    def findSpecialInteger(self, arr: List[int]) -> int:
        counts = DefaultDict(int)
        target = len(arr) / 4

        for _ in arr:
            counts[_] += 1

            if counts[_] > target:
                return _

        return -1
