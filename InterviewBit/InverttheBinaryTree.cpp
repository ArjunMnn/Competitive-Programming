/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
TreeNode* Solution::invertTree(TreeNode* A) {
    if(!A)
        return NULL;
    swap(A->left, A->right);
    invertTree(A->left);
    invertTree(A->right);
    return A;
}
