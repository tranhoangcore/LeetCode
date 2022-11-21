class Solution {
public:
    int maxDepth(string s) {
      int result = 0, depth = 0;
      for(char& i:s){
        if(i == '(')
          result = max(result, ++depth);
        if (i == ')')
          depth--;
      }
      return result;
    }
};
