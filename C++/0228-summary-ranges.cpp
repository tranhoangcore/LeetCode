class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        int n = nums.size();
        vector<string> result;
        for(int i = 0; i < n; i++){
            int start = nums[i];
            while(i != (n-1) && nums[i] == nums[i+1] - 1)
                i++;
            int end = nums[i];
            if(start == end)
                result.push_back(to_string(start));
            else
                result.push_back(to_string(start) + "->" + to_string(nums[i]));
        }
        return result;
    }
};