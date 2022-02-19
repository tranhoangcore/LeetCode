class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
      vector<int> ans;
      int count[101] = {0};
      for(auto& i:nums){
        count[i]++;
      }
      for(int i =1; i<=100; i++){
        count[i] += count[i-1];
      }
      for(int i = 0; i < nums.size(); i++){
        if(nums[i]==0)
          ans.push_back(0);
        else
          ans.push_back(count[nums[i] - 1]);
      }
      return ans;
    }
};
