class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> res;

        map<int, string> hashmap;
        hashmap.insert({3, "Fizz"});
        hashmap.insert({5, "Buzz"});

        for(int i = 1; i <= n; i++){
            string tmp = "";
            for(auto& key: hashmap){
                if(i % key.first == 0)
                    tmp += key.second;
            }
            if(tmp == "")
                tmp += to_string(i);
            res.push_back(tmp);
        }
        return res;
    }
};