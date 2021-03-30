class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result;
        unordered_map<int, int> hashtable;
        for(int i = 0; i < nums.size(); i++){
            int numberFind = target - nums[i];
        if(hashtable.count(numberFind)>0){
            result.push_back(hashtable[numberFind]);
            result.push_back(i);
            break;
            }
            hashtable[nums[i]] = i;
        }
        return result;
    }
};