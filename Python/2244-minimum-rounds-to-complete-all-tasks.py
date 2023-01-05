class Solution:
    def minimumRounds(self, tasks: List[int]) -> int:
        freq = Counter(tasks).values()
        res = 0
        for i in freq:
            if i == 1:
                return -1
            res += (i+2) // 3
        return res
