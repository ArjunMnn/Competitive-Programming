/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 
void dfs(TreeNode* node, int k, vector<vector<int>>& res){
    if(res.size()==k)
        res.push_back({});
    res[k].push_back(node->val);
    if(node->left)
        dfs(node->left,k+1,res);
    if(node->right)
        dfs(node->right,k+1,res);
}
 
vector<int> Solution::solve(TreeNode* A) {
    vector<vector<int>> res;
    vector<int> ans;
    dfs(A,0,res);
    reverse(res.begin(),res.end());
    for(auto i: res){
        for(auto j: i){
            ans.push_back(j);
        }
    }
    return ans;
    
}
