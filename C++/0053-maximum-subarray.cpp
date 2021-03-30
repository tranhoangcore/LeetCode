class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int currMaxSum = nums[0];
        int maxSum = nums[0];
        for(int i=1; i <nums.size();i++){
            currMaxSum = max(currMaxSum + nums[i], nums[i]);
            maxSum = max(maxSum, currMaxSum);
        }
        return maxSum;
    }
};