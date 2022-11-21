class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> res;
        for(unsigned int i = 0; i < nums.size(); i++){
            if( (i > 0) && (nums[i] == nums[i-1]))
                continue;
            int left = i + 1, right = nums.size() - 1;
            while(left < right){
                int _sum = nums[i] + nums[left] + nums[right];
                if(_sum > 0)
                    right--;
                else if(_sum < 0)
                    left++;
                else{
                    res.push_back(vector<int> {nums[i], nums[left], nums[right]});
                    while(nums[left] == nums[left+1])
                        left++;
                    while(nums[right] == nums[right-1])
                        right--;
                    left++;
                    right--;
                }
            }
        }
        return res;
    }
};