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
    TreeNode* dfs(TreeNode* node, int low, int high){
        if(node==NULL)
            return NULL;
        if(node->val > high)
            return dfs(node->left, low, high);
        else if(node->val < low)
            return dfs(node->right, low, high);
        else{
            node->left = dfs(node->left, low, high);
            node->right = dfs(node->right, low, high);
            return node;
        }
        
    }
    
    TreeNode* trimBST(TreeNode* root, int low, int high) {
        return(dfs(root, low, high));
    }
};