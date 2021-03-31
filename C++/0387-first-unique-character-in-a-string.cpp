class Solution
{
public:
    int firstUniqChar(string s)
    {
        int chr[256] = {0};
        for (int i = 0; i < s.length(); i++)
        {
            chr[s[i]] += 1;
        }
        for (int i = 0; i < s.length(); i++)
        {
            if (chr[s[i]] == 1)
                return i;
        }
        return -1;
    }
};