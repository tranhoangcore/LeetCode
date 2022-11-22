class Solution:
    def numSquares(self, n: int) -> int:
        if n < 2:
            return n
        l =  []
        i = 1
        while i * i <= n:
            l.append(i * i)
            i += 1
        count = 0
        toCheck = {n}
        while toCheck:
            count += 1
            tmp = set()
            for x in toCheck:
                for y in l:
                    if x == y:
                        return count
                    if x < y:
                        break
                    tmp.add(x-y)
            toCheck = tmp
        return count
