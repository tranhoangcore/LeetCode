class Solution {
public:
    int maxArea(vector<int>& height) {
        int _max = INT_MIN;
        int i = 0, j = height.size() - 1;
        while(i <  j){
            int _min = min(height[i], height[j]);
            _max = max(_max, _min * (j - i));
            if(height[i] < height[j])
                i++;
            else
                j--;
        }
        return _max;
    }
};