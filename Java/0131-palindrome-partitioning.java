class Solution {
    public List<List<String>> partition(String s) {
      List<List<String>> res = new ArrayList<>(); 
      List<String> path = new ArrayList<>();
      dfs(s, 0, path, res);
      return res;
    }
    private void dfs(String s, int index, List<String> path, List<List<String>> res){
      if(index == s.length()){
        res.add(new ArrayList<>(path));
        return;
      }
      for(int i = index; i < s.length(); i++){
        if(isPalindrome(s, index, i)){
          path.add(s.substring(index, i+1));
          dfs(s, i+1, path, res);
          path.remove(path.size() -1);
        }
      }
    }
    private boolean isPalindrome(String s, int l, int r){
      while(l<=r){
        if(s.charAt(l++)!= s.charAt(r--))
          return false;
      }
      return true;
    }
}
