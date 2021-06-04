class Solution {
    public List<String> generateParenthesis(int n) {
        List<String> res = new ArrayList<String>();
        backtracking(res, "", 0, 0, n);
        return res;
    }
    public void backtracking(List<String> res, String currString, int open, int close, int max){
        if(currString.length() == max * 2){
            res.add(currString);
            return;
        }

        if(open < max)
            backtracking(res, currString + "(", open + 1, close, max);
        if(close < open)
            backtracking(res, currString + ")", open, close + 1, max);
    }
}