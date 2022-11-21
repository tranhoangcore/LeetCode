class Solution {
    public boolean isValid(String s) {
        Stack<Character> tmp = new Stack<Character>();
        for(char c : s.toCharArray()){
            if( c == '(' || c == '{' || c == '['){
                tmp.push(c);
            }
            else{
                if((tmp.empty()) || ( c == ')' && tmp.peek() != '(') || ( c == '}' && tmp.peek() != '{') || ( c == ']' && tmp.peek() != '['))
                    return false;
                tmp.pop();
            }
        }
        return tmp.empty();
    }
}