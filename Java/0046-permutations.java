class Solution {
    public List<List<Integer>> permute(int[] nums) {
        List<List<Integer>> res = new ArrayList<>();
        permuteRecursive(nums, new ArrayList<>(), res);
        return res;
    }
    public void permuteRecursive(int[] nums, List<Integer> tmpList, List<List<Integer>> res){
        if(tmpList.size() >= nums.length){
            res.add(new ArrayList<>(tmpList));
        }
        else{
            for(int i = 0; i < nums.length; i++){
                if(tmpList.contains(nums[i]))
                    continue;
                tmpList.add(nums[i]);
                permuteRecursive(nums, tmpList, res);
                tmpList.remove(tmpList.size() - 1);
            }
        }
    }
}