class Solution:
    def bestClosingTime(self, customers: str) -> int:
        n = len(customers)
        ys = customers.count("Y")
        ns = n - ys

        best = ys
        current = ys
        best_index = 0
        for i in range(n):
            if customers[i] == "Y":
                current -= 1
            else:
                current += 1
            if current < best:
                current = best
                best_index = i + 1
        return best_index
