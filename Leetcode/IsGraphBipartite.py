class Solution:
    def isBipartite(self, graph):
        
        def dfs(node):
            if self.loop:
                return False
            for nei in graph[node]:
                if dist[nei]>=0 and dist[nei] == dist[node]:
                    self.loop = True
                elif dist[nei] == -1:
                    dist[nei] = dist[node]^1
                    dfs(nei)
        
        
        self.loop = False
        n = len(graph)
        dist = [-1]*n
        for i in range(n):
            if self.loop:
                return False
            if dist[i] == -1:
                dist[i] = 0
                dfs(i)
        return True