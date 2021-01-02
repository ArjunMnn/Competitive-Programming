/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 
bool flag = 1;
 
int dfs(TreeNode* node){
        if(node==NULL)
            return 0;
        int left = dfs(node->left);
        int right = dfs(node->right);
        
        if(abs(left - right)>1)
            flag = 0;
        return max(left+1,right+1);
}
 
int Solution::isBalanced(TreeNode* A) {
    dfs(A);
    return flag;
}
