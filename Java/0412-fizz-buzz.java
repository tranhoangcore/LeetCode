class Solution {
    public List<String> fizzBuzz(int n) {
        List<String> res = new ArrayList<String>();
        
        HashMap<Integer, String> hashmap = new HashMap<Integer, String>();
        hashmap.put(3, "Fizz");
        hashmap.put(5, "Buzz");

        for(int i = 1; i <=n; i++){
            String tmp = "";
            for(Integer key : hashmap.keySet()){
                if(i % key == 0)
                    tmp += hashmap.get(key);
            }
            if(tmp.equals(""))
                tmp += Integer.toString(i);
            res.add(tmp);
        }
        return res;
    }
}