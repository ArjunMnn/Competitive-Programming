# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def verticalTraversal(self, root: TreeNode) -> List[List[int]]:
        d = collections.defaultdict(list)
        self.min = float("inf")
        self.max = -float("inf")
        def dfs(node, h, v):
            self.min = min(self.min, h)
            self.max = max(self.max, h)
            d[h].append((v, node.val))
            if node.left: 
                dfs(node.left, h-1, v+1)
            if node.right:
                dfs(node.right, h+1, v+1)
                
        
        dfs(root, 0, 0)
        out = []
        for i in range(self.min, self.max+1):
            out+=[[j for i,j in sorted(d[i])]]
        return out