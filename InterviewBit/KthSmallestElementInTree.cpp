/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

void dfs(TreeNode* node,vector<int>& res, int B){
    if(!node)
        return;
    dfs(node->left,res,B);
    if(res.size()<B)
        res.push_back(node->val);
    if(res.size()==B)
        return;
    dfs(node->right,res,B);
}
int Solution::kthsmallest(TreeNode* A, int B) {
    vector<int> res;
    dfs(A,res,B);
    return res[B-1];
}
