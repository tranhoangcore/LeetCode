class Solution {
public:
    bool isPalindrome(int x) {
        long long int tmp = x, s = 0;
        if(x <0)
            return false;
        while(tmp > 0){
            s = tmp % 10 + s * 10;
            tmp /= 10;
        }
        return (s == x);
    }
};