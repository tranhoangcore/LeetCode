class Solution {
private:
    void swap(int& a, int& b){
        int tmp = a;
        a = b;
        b = tmp;
    }
	void merge(vector<int>& nums, int l, int m, int r){
        vector<int> tmp(r - l + 1);
        int i = l, j = m + 1, k = 0;
        while(i <= m && j <= r){
            if(nums[i] <= nums[j])
                tmp[k++] = nums[i++]; 
            else
                tmp[k++] = nums[j++];
        }
        while(i <= m) tmp[k++] = nums[i++];
        while(j <= r) tmp[k++] = nums[j++]; 
        for(i = 0; i < k; i++)
            nums[l + i] = tmp[i];
    }
	
    void merge_sort(vector<int>& nums, int l, int r){
        if(l >= r) 
            return;
        int m = l + (r - l) / 2;
        merge_sort(nums, l, m);
        merge_sort(nums, m + 1, r);
        merge(nums, l, m, r);
    }
public:
    vector<int> sortArray(vector<int>& nums) {
        merge_sort(nums, 0, nums.size() - 1);
        return nums;
    }
};