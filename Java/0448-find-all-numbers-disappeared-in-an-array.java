import java.util.Set;

class Solution {
    public List<Integer> findDisappearedNumbers(int[] nums) {
        List<Integer> res = new ArrayList<Integer>();
        Set<Integer> hash = new HashSet<Integer>();
        for(int i:nums)
            hash.add(i);
        for(int i = 1; i <= nums.length; i++){
            if(!hash.contains(i))
                res.add(i);
        }
        return res;
    }
}