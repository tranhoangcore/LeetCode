class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> hash;
        for(int num : nums){
            if(++hash[num] > nums.size() /2 )
                return num;
        }
        return 0;
    }
};