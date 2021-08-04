class Solution:
    def maximumWealth(self, accounts: List[List[int]]) -> int:
        result = 0
        for i in range(0, len(accounts)):
            sum = 0
            for j in range(0, len(accounts[i])):
                sum = sum + accounts[i][j]
            result = max(result, sum)
        return result
