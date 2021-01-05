/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 
 
 void dfs(TreeNode* A, TreeNode* B, bool &ans){
    if((!A && B) || (A && !B)){
        ans = 1;
        return;
     }
    if(!A && !B)
        return;
    if(A->val!=B->val)
        ans = 1;
    else{
        dfs(A->left,B->left,ans);
        dfs(A->right,B->right,ans);
    }
     
 }
 
int Solution::isSameTree(TreeNode* A, TreeNode* B) {
    bool ans = 0;
    dfs(A,B,ans);
    return !ans;
}
