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
    vector<int> path;
    int c = 0;
    void calpal(int pathlen){
        vector<int> newl;
        copy(path.begin(), path.begin()+pathlen, back_inserter(newl));
        unordered_map<int,int> d;
        for(auto i:newl){
            if(d.find(i)==d.end())
                d[i] = 1;
            else
                d[i]++;
        }
        int sum = 0;
        for(auto i:d)
            sum+=i.second%2;
        if(sum<2)
            c++;
    }
    void sudo(TreeNode* node, int pathlen){
        if(!node)
            return;
        
        if(path.size()>pathlen)
            path[pathlen] = node->val;
        else
            path.push_back(node->val);
        pathlen++;
        if(!node->left && !node->right)
            calpal(pathlen);
        else{
            sudo(node->left, pathlen);
            sudo(node->right, pathlen);
        }
    }
    
    int pseudoPalindromicPaths (TreeNode* root) {
        
        sudo(root,0);
        return c;
    }
};