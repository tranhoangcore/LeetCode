class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_set<int> hash;

        if(k < 0)
            return false;
        for(int i = 0; i < nums.size(); i++){
            if( i > k)
                hash.erase(nums[i-k-1]);
            if(hash.find(nums[i]) != hash.end())
                return true;
            hash.insert(nums[i]);
        }
        return false;
    }
};