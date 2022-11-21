class Solution {
    public int numIdenticalPairs(int[] nums) {
      int result = 0;
      int [] count = new int[101];
      for (int i : nums)
        result+= count[i]++;
      return result;
    }
}
