class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int pos, i = 0;
    while(target > nums[i]){
        i++;
        if(target==nums[i]){
            pos = i;
        }
        if(i==nums.size()){
            return nums.size();
        }
    }
    pos = i;
    return pos;
    }
};