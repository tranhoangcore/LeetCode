class Solution
{
public:
    bool containsDuplicate(vector<int> &nums)
    {
        unordered_set<int> hash;
        hash.insert(nums[0]);
        for (int i = 1; i < nums.size(); i++)
        {
            if (hash.count(nums[i]) <= 0)
                hash.insert(nums[i]);
            else
                return true;
        }
        return false;
    }
};