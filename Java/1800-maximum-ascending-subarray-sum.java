class Solution {
    public int maxAscendingSum(int[] nums) {
        int res = 0, _max = nums[0];
        for(int i = 1; i < nums.length; ++i){
            if(nums[i] <= nums[i-1]){
                res = Math.max(res, _max);
                _max = 0;
            }
            _max += nums[i];
        }
        return Math.max(res, _max);
    }
}