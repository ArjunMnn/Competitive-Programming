/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
TreeNode* Solution::flatten(TreeNode* A) {
    stack<TreeNode*> s;
    s.push(A);
    while(!s.empty()){
        TreeNode* node = s.top(); s.pop();
        if(node->right)
            s.push(node->right);
        if(node->left)
            s.push(node->left);
        if(!s.empty())
            node->right = s.top();
        node->left = NULL;
    }
    return A;
    
}
