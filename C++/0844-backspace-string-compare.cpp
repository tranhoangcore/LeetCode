class Solution {
public:
    void removeBackspace(string &s){
        int i = 0;
        for(int i = 0; i < s.size(); i++){
            if(s[i] == '#'){
                int backStep = i > 0 ? 2:1;
                s.erase(i - backStep + 1, backStep);
                i -= backStep;
            }
        }
    }
    bool backspaceCompare(string s, string t) {
        removeBackspace(s);
        removeBackspace(t);
        return (s == t);
    }
};