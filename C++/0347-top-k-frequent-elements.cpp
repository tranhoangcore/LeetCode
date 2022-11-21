class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> res;
        if( nums.size() == k)
            return nums;

    unordered_map<int, int> count_map;
    
    for(int i : nums){
        count_map[i]++;
    }
    priority_queue<pair<int, int>> pd;

    for(auto it = count_map.begin(); it != count_map.end(); it++){
        pd.push(make_pair(it->second, it->first));
        if(pd.size() > (int) count_map.size() - k){
            res.push_back(pd.top().second);
            pd.pop();
        }
    }
    return res;
    }
};
