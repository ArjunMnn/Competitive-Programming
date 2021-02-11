/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    
    int dfs(TreeNode* node, int l, unordered_map<int,int> &d){
        if(node==NULL)
            return 0;
        dfs(node->right, l+1, d);
        if(d.find(l)==d.end())
            d[l] = node->val;
        dfs(node->left, l+1, d);
        return 0;
    }
    
    vector<int> rightSideView(TreeNode* root) {
        unordered_map<int,int> d;
        dfs(root, 0, d);
        vector<int> res;
        for(int i = 0; i<d.size(); i++){
            res.push_back(d[i]);
        }
        return res;
    }
};