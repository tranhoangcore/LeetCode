class Solution {
public:
    int myAtoi(string s) {
        int res = 0, sign = 1, i = 0;
        if(s[0] > 64 && s[0] < 123)
            return 0;
        while(s[i] == ' '){
            i++;
        }
        if(s[i] == '-'|| s[i] == '+'){
            sign = 1 - 2 * (s[i++] == '-');
        }
        while(s[i] > 47 && s[i] < 58){
            if(res > INT_MAX / 10 || res == INT_MAX / 10 && s[i] > 55){
                if(sign == 1)
                    return INT_MAX;
                else
                    return INT_MIN;
            }
            res = res * 10 + (s[i++] - '0');
        }
        return sign * res;
    }
};