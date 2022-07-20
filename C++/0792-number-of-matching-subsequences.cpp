class Solution {
public:
    bool isSubsequence(string s1, string s2, int m, int n){
        int count = 0;
        for(int i = 0; i < m && count < n; i++){
            if(s1[i] == s2[count])
                count++;
        }
        return count==n;
    }
    int numMatchingSubseq(string s, vector<string>& words) {
        int ans = 0;
        map<string, bool> m;
        for(auto x : words){
            if(m.find(x) != m.end()){
                if(m[x] == true)
                    ans++;
                continue;
            }
            m[x] = isSubsequence(s, x, s.size(), x.size());
            ans += (m[x] == true);
        }
        return ans;
    }
};
