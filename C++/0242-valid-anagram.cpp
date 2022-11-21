class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length())
            return false;
        unordered_map<char, int> counter;
        for(int i = 0; i < s.length(); i++){
            counter[s.at(i) - 'a']++;
            counter[t.at(i) - 'a']--;
        }
        for(auto count : counter){
            if(count.second)
                return false;
        }
        return true;
    }
};