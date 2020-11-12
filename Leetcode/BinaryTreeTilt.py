class Solution:
    def findTilt(self, root: TreeNode) -> int:
        self.res = 0
        def dfs(node):
            if not node:
                return 0
            left=dfs(node.left)
            right=dfs(node.right)
            
            diff = abs(left - right)
            self.res+=diff
            return node.val+left+right
        dfs(root)
        return self.res
            