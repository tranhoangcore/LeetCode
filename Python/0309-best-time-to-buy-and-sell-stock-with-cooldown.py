class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        cool_down, sell, hold = 0, 0, -float('inf')
        for i in prices:
            prev_cool_down, prev_sell, prev_hold = cool_down, sell, hold
            cool_down = max(prev_cool_down, prev_sell)
            sell = prev_hold + i
            hold = max(prev_hold, prev_cool_down - i)
        return max(sell, cool_down) 
