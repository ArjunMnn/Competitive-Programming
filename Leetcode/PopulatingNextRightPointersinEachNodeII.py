class Solution:
    def connect(self, root: 'Node') -> 'Node':
        if not root:
            return 
        d = defaultdict(list)
        def dfs(node,level):
            if not node:
                return
            d[level] += [node]
            dfs(node.left,level+1)
            dfs(node.right,level+1)
        dfs(root,1)
        for k,v in d.items():
            for i in range(len(v)-1):
                v[i].next=v[i+1]
        return root