class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
      int count = 0;
      int j = ruleKey == "type" ? 0 : ruleKey == "color" ? 1:2;
      for(int i = 0; i < items.size(); i++){
        if(items[i][j] == ruleValue)
          count++;
      }
      return count;
    }
};
