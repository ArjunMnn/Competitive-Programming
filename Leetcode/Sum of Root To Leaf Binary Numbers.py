# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def sumRootToLeaf(self, root: TreeNode) -> int:
        self.c = 0
        
        def dfs(node,res):
            if not node:
                return
            if not node.left and not node.right:
                
                dec = int(res+str(node.val),2)
                self.c+=dec
            
            dfs(node.left,res+str(node.val))
            
            dfs(node.right,res+str(node.val))
            
        dfs(root,"")
        return self.c
        