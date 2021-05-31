class Solution {
    public List<List<Integer>> subsets(int[] nums) {
        List<List<Integer>> res = new ArrayList<>();
        List<Integer> sub_num = new ArrayList<>();
        backtrack(nums, 0, sub_num, res);
        return res;       
    }
    public void backtrack(int[] nums, int start, List<Integer> sub_num, List<List<Integer>> res){
        res.add(new ArrayList<>(sub_num));
        for(int i = start;  i < nums.length; i++){
            sub_num.add(nums[i]);
            backtrack(nums, i + 1, sub_num, res);
            sub_num.remove(sub_num.size() - 1);
        }
    }
}