class Codec:

    def serialize(self, root: TreeNode) -> str:
        self.i = []
        def inorder(node):
            if not node:
                return 
            inorder(node.left)
            self.i.append(node.val)
            inorder(node.right)
        self.post = []
        def post(node):
            if not node:
                return 
            post(node.left)
            
            post(node.right)
            self.post.append(node.val)
        inorder(root)
        post(root)
        ans = ""
        for i in self.i+self.post:
            ans+=str(i)+" "
        return ans
    

    def deserialize(self, data: str) -> TreeNode:
        
        data = list(data.split())
        n = len(data)
        # print(data)
        inor = []
        post = []
        l = 0
        for i in range(n//2):
            if data[i]!=' ':
                inor.append(int(data[i]))
        for i in range(n//2,n):
            if data[i]!=' ':
                post.append(int(data[i]))
      
    
        def buildTree(inorder, postorder):
            if not inorder:
                return
            r = postorder.pop()
            root = TreeNode(r)
            i = inorder.index(r)

            root.right = buildTree(inorder[i+1:],postorder)
            root.left = buildTree(inorder[:i],postorder)
            return root
        return buildTree(inor,post)