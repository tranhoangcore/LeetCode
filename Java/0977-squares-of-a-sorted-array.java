class Solution {
    public int[] sortedSquares(int[] nums) {
        int length = nums.length;
        int[] res = new int[length];
        int left = 0, right = length - 1;
        for(int i = length - 1; i >= 0; i--){
            if(Math.abs(nums[left]) < Math.abs(nums[right]))
                res[i] = nums[right] * nums[right--];
            else
                res[i] = nums[left] * nums[left++];
        }
        return res;
    }
}