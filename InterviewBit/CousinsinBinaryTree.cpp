/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
vector<int> Solution::solve(TreeNode* A, int B) {
    queue<TreeNode*> q;
    q.push(A);
    bool found = false;
    vector<int> res;
    while(!q.empty() && !found){
        int m = q.size();
        for(int i = 0; i<m; i++){
            TreeNode* node = q.front(); q.pop();
            if((node->left && node->left->val == B) || (node->right && node->right->val==B))
                found = true;
            else{
                if(node->left)
                    q.push(node->left);
                if(node->right)
                    q.push(node->right);
            }
        }
    }
    while(!q.empty()){
       
        int val = (q.front())->val;
        res.push_back(val);
        q.pop();
    }
    
    return res;
}
