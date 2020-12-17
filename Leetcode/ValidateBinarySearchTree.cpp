class Solution {
public:
    
    bool dfs(TreeNode* node,long long minn, long long  maxx){
        if(node==NULL)
            return true;
        if(node->val>=maxx || node->val<=minn)
            return false;
        return dfs(node->left,minn,node->val) && dfs(node->right,node->val,maxx);
    }
    
    bool isValidBST(TreeNode* root) {
        return dfs(root,(long)INT_MIN-1,(long)INT_MAX+1);
    }
};