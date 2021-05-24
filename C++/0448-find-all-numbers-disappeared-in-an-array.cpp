class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> res;
        unordered_set <int> hash;
        for(int i = 0; i< nums.size(); i++){
            hash.insert(nums[i]);
        }
        for(int i = 1; i <= nums.size(); i++){
            if(hash.find(i) == hash.end())
                res.push_back(i);
        }
        return res;
    }
};