class Solution {
public:
    int mySqrt(int x) {
        if(x==0)
            return 0;
        long long int left = 1, right = x, mid = 0;
        while(left <= right){
            mid = (left + right) / 2;
            if( (x/mid >= mid) && (x / (mid + 1) < (mid + 1)))
                return mid;
            else if(x / mid >= mid)
                left = mid;
            else
                right =  mid;
        }
        return 0;
    }
};