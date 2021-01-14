/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 

 
TreeNode* Solution::solve(TreeNode* A) {
    if(!A)
        return NULL;
    
    A->left = solve(A->left);
    A->right = solve(A->right);
    
    if((A->left && !A->right) || (!A->left && A->right))
        return A->right?A->right:A->left;
    
    return A;
}
