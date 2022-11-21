class Solution:
    def fizzBuzz(self, n: int) -> List[str]:
        res = []
        dict = {
            3: "Fizz",
            5: "Buzz"
        }

        for i in range(1, n + 1):
            tmp = ""
            for key in dict.keys():
                if i % key == 0:
                    tmp += dict[key]
            if not tmp:
                tmp = str(i)
            res.append(tmp)
        return res
        