class Solution {
public:
    bool flag = true;
    int dfs(TreeNode* node){
        if(node==NULL)
            return 0;
        int left = dfs(node->left);
        int right = dfs(node->right);
        
        if(abs(left - right)>1)
            flag = false;
        return max(left+1,right+1);
    }
    bool isBalanced(TreeNode* root) {
        dfs(root);
        return flag;
    }
};