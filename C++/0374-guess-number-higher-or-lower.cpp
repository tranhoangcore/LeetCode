/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is lower than the guess number
 *			      1 if num is higher than the guess number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        int maxNum = n, minNum = 1;
        while(true){
            int mid = (maxNum - minNum) / 2 + minNum;
            int pos = guess(mid);
            if(pos == 0){
                return mid;
            }
            else if(pos == 1){
                minNum = mid + 1;
            }
            else{
                maxNum =  mid - 1;
            }
        }
    }
};