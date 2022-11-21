class Solution {
    public int maxDepth(String s) {
      int res = 0, depth = 0;
      for(int i = 0; i < s.length(); i++){
        if(s.charAt(i) == '('){
          res = Math.max(res, ++depth);
        }
        if(s.charAt(i)==')')
          depth--;
      }
      return res;
    }
}
