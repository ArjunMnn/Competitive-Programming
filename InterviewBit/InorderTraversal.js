// Definition for a  binary tree node
//    function TreeNode(data){
//      this.data = data
//      this.left = null
//      this.right = null
//    }

module.exports = { 
 //param A : root node of tree
 //return a array of integers
	inorderTraversal : function(A){
	    var stack = [];
	    var res = [];
	    var curr = A;
	    while(stack.length>0 || curr!=null){
	       // console.log(stack);
	        while(curr){
	            stack.push(curr);
	            curr = curr.left;
	        }
	        var temp = stack[stack.length-1];
	        stack.pop();
	        res.push(temp.data);
	        curr = temp.right;
	    }
	    return res;

	}
};
