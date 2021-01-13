
TreeNode* LCA(TreeNode* node, int B, int C){
    if(!node)
        return NULL;
    if(node->val == B || node->val == C)
        return node;
    TreeNode* L = LCA(node->left, B, C);
    TreeNode* R =  LCA(node->right, B, C);
    
    if(L && R)
        return node;
    return L?L:R;
}


bool find(TreeNode* A, int k){
    if(!A)
        return false;
    if(A->val==k)
        return true;
    return find(A->left, k) || find(A->right, k) ;
}


int Solution::lca(TreeNode* A, int B, int C) {
    if(!find(A, B) || !find(A, C))
        return -1;
    TreeNode* ans = LCA(A, B, C);
    if(!ans)
        return -1;
    return ans->val;
    
}