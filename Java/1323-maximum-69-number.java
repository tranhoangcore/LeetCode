class Solution {
    public int maximum69Number (int num) {
      char[] tmp =  String.valueOf(num).toCharArray();
      for(int i = 0; i < tmp.length; i++)
        if(tmp[i]=='6'){
          tmp[i] = '9';
          break;
        }
      return Integer.valueOf(String.valueOf(tmp));
    }
}
