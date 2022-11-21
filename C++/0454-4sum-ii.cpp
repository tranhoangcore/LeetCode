class Solution {
public:
    int fourSumCount(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3, vector<int>& nums4) {
        int res = 0;
        unordered_map <int, int> hashmap;
        for(int i = 0; i < nums3.size(); i++){
            for(int j = 0; j < nums4.size(); j++){
                int sum = nums3[i] + nums4[j];
                hashmap[sum]++;
            }
        }

        for(int i = 0; i < nums1.size(); i++){
            for(int j = 0; j < nums2.size(); j++){
                auto tmp = hashmap.find(0 - nums1[i] - nums2[j]);
                if(tmp != hashmap.end()){
                    res += tmp->second;
                }
            }
        }
        return res;      
    }
};