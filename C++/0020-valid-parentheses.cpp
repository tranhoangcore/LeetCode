class Solution {
public:
    bool isValid(string s) {
        stack<char> tmp;
        for(char c : s){
            if(c == '(' || c == '{' || c == '['){
                tmp.push(c);
            }
            else{
                if((tmp.empty()) || (c == ')' && tmp.top() != '(') || ( c == '}' && tmp.top() != '{') || ( c == ']' && tmp.top() != '['))
                    return false;
                tmp.pop();
            }
        }
        return tmp.empty();
    }
};