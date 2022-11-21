class Solution {
    public int numJewelsInStones(String jewels, String stones) {
      int result = 0;
      Set SetC = new HashSet();
      for( char c : jewels.toCharArray()){
        SetC.add(c);
      }
      for(char c : stones.toCharArray()){
        if(SetC.contains(c))
          result++;
      }
      return result;
    }
}
