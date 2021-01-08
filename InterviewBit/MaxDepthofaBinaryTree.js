// Definition for a  binary tree node
//    function TreeNode(data){
//      this.data = data
//      this.left = null
//      this.right = null
//    }

module.exports = { 
 //param A : root node of tree
 //return an integer
	maxDepth : function(A){
	    if(!A)
	        return 0;
	    return Math.max(this.maxDepth(A.left),this.maxDepth(A.right))+1;

	}
};
