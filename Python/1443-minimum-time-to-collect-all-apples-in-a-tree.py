class Solution:
    def minTime(self, n: int, edges: List[List[int]], hasApple: List[bool]) -> int:
        tree = defaultdict(list)
        for s, e in edges:
            tree[s].append(e)
            tree[e].append(s)
        
        def dfs(node, parrent):
            res = 0
            for i in tree[node]:
                if i != parrent:
                    res += dfs(i, node)
            if res or hasApple[node]:
                return res + 2
            return res
        return max(dfs(0,-1)-2,0)
