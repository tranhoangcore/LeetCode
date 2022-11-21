class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> res;
        backtracking(res, "",0, 0, n);
        return res;
    }
    void backtracking(vector<string>& res, string curr_string, int open, int close, int max){
        if(curr_string.length() == max * 2){
            res.push_back(curr_string);
            return;
        }
        if(open < max)
            backtracking(res, curr_string + "(", open + 1, close, max);
        if(close < open)
            backtracking(res, curr_string + ")", open, close + 1, max);
    }
};