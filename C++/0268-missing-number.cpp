class Solution {
public:
    int missingNumber(vector<int>& nums) {
        unordered_set<int> hash;
        for(int i = 0; i < nums.size(); i++){
            hash.insert(nums[i]);
        }
        for(int i = 0; i < nums.size() + 1; i++){
            if(hash.count(i)<=0)
                return i;
        }
        return -1;
    }
};