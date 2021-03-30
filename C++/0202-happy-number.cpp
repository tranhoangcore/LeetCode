class Solution {
public:
    bool isHappy(int n) {
        unordered_set<int> hash;
        while(n!=1){
            if(hash.count(n)<=0)
                hash.insert(n);
            else
                return false;
            int sum = 0;
            while(n){
                sum += pow(n%10,2);
                n /= 10;
            }
            n = sum;
        }
        return true;
    }
};