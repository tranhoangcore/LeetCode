class Solution {
    public int countMatches(List<List<String>> items, String ruleKey, String ruleValue) {
      int count = 0, j;
      if(ruleKey.equals("type"))
        j = 0;
      else if (ruleKey.equals("color"))
        j = 1;
      else
        j = 2;
      for(List<String> list : items){
        if(list.get(j).equals(ruleValue))
          count++;
      }
      return count;
    }
}
