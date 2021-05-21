import javax.print.attribute.standard.NumberUpSupported;

class Solution {
    public int[] twoSum(int[] numbers, int target) {
        int left = 0, right = numbers.length - 1;
        //int[] res = new int[numbers.length];
        while(left < right){
            int s = numbers[left] + numbers[right];
            if(s == target){
                return new int[]{left+1, right+1};
            }
            else if( s < target)
                left++;
            else
                right--;
        }
        return new int[0];
    }
}