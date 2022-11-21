class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> res;
        vector<int> sub_num;
        backtrack(nums, 0, sub_num, res);
        return res;
    }
    void backtrack(vector<int>& nums, int start, vector<int>& sub_num, vector<vector<int>>& res){
        //if(sub_num.size() >= nums.size())
            res.push_back(sub_num);
        //else{
            for(int i = start; i < nums.size(); i++){
                sub_num.push_back(nums[i]);
                backtrack(nums, i+1, sub_num, res);
                sub_num.pop_back();
            }
      //  }
    }
};