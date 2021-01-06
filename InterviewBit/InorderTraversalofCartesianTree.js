// Definition for a  binary tree node
//    function TreeNode(data){
//      this.data = data
//      this.left = null
//      this.right = null
//    }

module.exports = { 
 //param A : array of integers
 //return the root node in the tree
 
    
 
	buildTree : function(A){
	    
        return this.dfs(A,0,A.length-1);
	},
	
	dfs : function(A,i,j){
        if(i==j)
            return new TreeNode(A[i]);
        if(i>j)
            return null;
        var maxval = -1;
        var ind = -1;
        for(var k = i; k<=j; k++){
            if(A[k]>maxval){
                maxval = A[k];
                ind = k;
            }
        }
        var root = new TreeNode(maxval);
        root.left = this.dfs(A,i,ind-1);
        root.right = this.dfs(A,ind+1,j);
        return root;
    }
};
