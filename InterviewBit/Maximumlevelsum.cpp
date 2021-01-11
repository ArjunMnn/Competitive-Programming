/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
void dfs(TreeNode* node, int l, unordered_map<int,int>& d){
    if(!node)
        return;
    d[l]+=node->val;
    dfs(node->left, l+1, d);
    dfs(node->right, l+1, d);
} 

 
int Solution::solve(TreeNode* A) {
    if(!A)
        return 0;
    unordered_map<int,int> d;
    dfs(A, 0, d);
    int maxs = INT_MIN;
    for(auto i: d)
        maxs = max(maxs, i.second);
    return maxs;
}
