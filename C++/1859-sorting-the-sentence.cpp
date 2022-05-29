class Solution {
public:
    string sortSentence(string s) {
      string ans;
      string words;
      vector<string>v(10);

      for(int i = 0; i < s.size(); i++){
        if(s[i]>47 && s[i]< 58){
          v[s[i]-48] = words + " ";
          words = "";
          i++;
        }
        else
          words += s[i];
      }
      for (string i : v)
        ans += i;
      ans.pop_back();
      return ans;
    }
};
