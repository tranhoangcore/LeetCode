class Solution {
    public int[] topKFrequent(int[] nums, int k) {
        if(nums.length == k)
            return nums;
        Map<Integer, Integer> map = new HashMap();
        for(int i: nums){
            map.put(i, map.getOrDefault(i, 0) + 1);
        }

        Queue<Integer> head = new PriorityQueue<>(
            (n1, n2) -> map.get(n1) - map.get(n2));

        for(int i : map.keySet()){
            head.add(i);
            if(head.size() > k)
                head.poll();
        }
        int [] res = new int[k];
        for(int i = k -1; i >= 0; i--){
            res[i] = head.poll();
        }
        return res;
    }
}