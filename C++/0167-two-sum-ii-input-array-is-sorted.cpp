class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int left = 0, right  = numbers.size() - 1;
        vector<int> res;
        while(left < right){
            int s = numbers[left] + numbers[right];
            if(s == target){
                res.push_back(left+1);
                res.push_back(right+1);
                return res;
            }
            else if(s < target)
                left++;
            else
                right--;
        }
        return {0};
    }
};