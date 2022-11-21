class Solution {
    public int maxArea(int[] height) {
        int _max = Integer.MIN_VALUE;
        int i = 0, j = height.length - 1;
        while(i < j){
            int _min = Math.min(height[i], height[j]);
            _max = Math.max(_max, _min * ( j - i));
            if(height[i] < height[j])
                i++;
            else
                j--;
        }
        return _max;
    }
}