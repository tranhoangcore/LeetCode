class Solution
{
public:

    bool findVal(unordered_map<char, char> &hashtable, const char &c){
        for(auto i = hashtable.begin(); i != hashtable.end(); i++){
            if(i->second == c)
                return true;
        }
        return false;
    }

    bool isIsomorphic(string s, string t)
    {
        if(s.length() != t.length())
            return false;
        unordered_map<char,char> hashtable;

        for(int i = 0; i < s.length(); i++){
            if(hashtable.find(s[i])  == hashtable.end()){
                if(findVal(hashtable, t[i]))
                    return false;
                else
                    hashtable[s[i]] = t[i];
            }
            else if(hashtable[s[i]] != t[i])
                return false;
        }
        return true;
    }
};