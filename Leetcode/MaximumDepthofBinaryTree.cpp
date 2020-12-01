class Solution {
public:
    int dfs(TreeNode* node){
        if(node==NULL)
            return 0;
        int left = 1+dfs(node->left);
        int right = 1+dfs(node->right);
        return max(left,right);
    }
    int maxDepth(TreeNode* root) {
        if(root==NULL)
            return 0;
        int maxc = 0;
        return dfs(root);
    }
};