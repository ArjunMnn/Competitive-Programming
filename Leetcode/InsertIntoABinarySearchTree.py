class Solution:
    def insertIntoBST(self, root: TreeNode, val: int) -> TreeNode:
        if not root:
            return TreeNode(val)
        def dfs(node):
            if not node:
                return TreeNode(val)
            if node.val>val:
                node.left = dfs(node.left)
            else:
                node.right = dfs(node.right)
            return node
        dfs(root)
        return root