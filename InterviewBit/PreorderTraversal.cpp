/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
vector<int> Solution::preorderTraversal(TreeNode* A) {
    stack<TreeNode*> s;
    TreeNode* curr = A;
    vector<int> res;
    while(!s.empty() || curr){
        while(curr){
            res.push_back(curr->val);
            if(curr->right)
                s.push(curr->right);
            curr = curr -> left;
        }
        if(!s.empty()){
            curr = s.top();
            s.pop();
        }
    }
    return res;
}
