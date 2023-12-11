use std::collections::HashMap;

impl Solution {
    pub fn find_special_integer(arr: Vec<i32>) -> i32 {
        let mut counts: HashMap<i32, i32> = HashMap::new();
        let target = arr.len() as i32 / 4;
        for num in arr {
            let count = counts.entry(num).or_insert(0);
            *count += 1;
            if *count > target {
                return num;
            }
        }
        -1
    }
}
