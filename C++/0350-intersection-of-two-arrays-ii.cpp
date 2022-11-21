class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        multiset<int> hash;
        vector<int> result;
        for(int i = 0; i < nums1.size(); i++){
            hash.insert(nums1[i]);
        }
        for(int i = 0; i < nums2.size(); i++){
            if(hash.find(nums2[i]) != hash.end()){
                result.push_back(nums2[i]);
                hash.erase(hash.find(nums2[i]));
            }
        }
        return result;      
    }
};