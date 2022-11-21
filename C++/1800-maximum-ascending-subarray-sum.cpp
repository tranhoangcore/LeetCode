class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        int res = 0, _max = nums[0];
        for(int i = 1; i < nums.size(); ++i){
            if(nums[i] <= nums[i-1]){
                res = max(res, _max);
                _max = 0;
            }
            _max += nums[i];
        }
        return max(res, _max);
    }
};