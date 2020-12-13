class BSTIterator {
public:
    vector<int> trav;
    int it = -1;
    void dfs(TreeNode* node){
        if(node == NULL)
            return;
        dfs(node->left);
        trav.push_back(node->val);
        dfs(node->right);
    }
    BSTIterator(TreeNode* root) {
        dfs(root);
    }
    
    int next() {
        it++;
        return trav[it];
    }
    
    bool hasNext() {
        if(it==trav.size()-1)
            return false;
        return true;
    }
};