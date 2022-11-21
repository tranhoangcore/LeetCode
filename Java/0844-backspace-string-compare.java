class Solution {
    public String removeBackspace(String s){
        Stack<Character> ans = new Stack();
        for(char c: s.toCharArray()){
            if( c != '#')
                ans.push(c);
            else if( ! ans.empty())
                ans.pop();
        }
        return String.valueOf(ans);
        }
    public boolean backspaceCompare(String s, String t) {
        return removeBackspace(s).equals(removeBackspace(t));   
    }
}