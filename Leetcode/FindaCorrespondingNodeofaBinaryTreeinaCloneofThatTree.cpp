/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        queue<TreeNode*> q;
        queue<TreeNode*> qc;
        qc.push(cloned);
        q.push(original);
        while(!q.empty()){
            TreeNode* node = q.front(); q.pop();
            TreeNode* copy = qc.front(); qc.pop();
            if(node == target)
                return copy;
            if(node->left){
                q.push(node->left);
                qc.push(copy->left);
            }
            if(node->right){
                q.push(node->right);
                qc.push(copy->right);
            }
            
        }
        return cloned;
    }
};