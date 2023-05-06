class Solution {
public:
  int numJewelsInStones(string jewels, string stones) {
    int result = 0;
    unordered_set<char> SetC(jewels.begin(), jewels.end());
    for (char c : stones) {
      if (SetC.count(c))
        result++;
    }
    return result;
  }
};
