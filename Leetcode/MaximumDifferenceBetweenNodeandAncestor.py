class Solution:
    def maxAncestorDiff(self, root: TreeNode) -> int:
        if not root:
            return 0
        self.res = 0
        def dfs(node,maxx,minn):
            if not node:
                return
            self.res = max(self.res,abs(maxx-node.val),abs(minn-node.val))
            maxx = max(maxx,node.val)
            minn = min(minn,node.val)
            dfs(node.left,maxx,minn)
            dfs(node.right,maxx,minn)
            
        dfs(root,root.val,root.val)
        return self.res