class Solution:
    def maxArea(self, height: List[int]) -> int:
        _max = - sys.maxsize - 1
        i = 0
        j = len(height) - 1
        while i < j:
            _min = min(height[i], height[j])
            _max = max(_max, _min * ( j - i))
            if height[i] < height[j]:
                i += 1
            else:
                j -= 1
        return _max