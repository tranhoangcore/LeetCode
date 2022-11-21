class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
     vector<bool> result;
     int maxCandy = -1;
     for(int i = 0; i < candies.size(); i++){
       maxCandy = max(maxCandy, candies[i]);
     }
     for(int i = 0; i < candies.size(); i++){
       if(candies[i] + extraCandies >= maxCandy)
         result.push_back(true);
       else
         result.push_back(false);
     }
     return result;
    }
};
