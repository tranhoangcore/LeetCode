class Solution:
    def dfs(self, i, group):
        if i in self.group_mapping and group != self.group_mapping[i]:
            return False
        self.group_mapping[i] = group
        if i not in self.marked:
            self.marked.add(i)
            for dis in self.graph[i]:
                if not self.dfs(dis, not group):
                    return False
        return True

    def possibleBipartition(self, n: int, dislikes: List[List[int]]) -> bool:
        self.graph = collections.defaultdict(list)
        self.marked, self.group_mapping = set(), {}
        for (a, b) in dislikes:
            self.graph[a].append(b)
            self.graph[b].append(a)
        for i in range(1, n + 1):
            if i not in self.marked:
                if not self.dfs(i, True):
                    return False
        return True
