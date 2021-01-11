// Definition for a  binary tree node
//    function TreeNode(data){
//      this.data = data
//      this.left = null
//      this.right = null
//    }

module.exports = { 
 //param A : root node of tree
 //return an integer
    minDepth : function(A){
        if(A==null)
            return 0;
        var res = 99999999;
        function dfs(node,l){
            if(!node.left && !node.right){
                res = Math.min(res,l);
                return;
            }
            if(node.left!=null)
                dfs(node.left,l+1);
            if(node.right!=null)
                dfs(node.right, l+1);
        }
        dfs(A,1);
        return res;
    }
};
