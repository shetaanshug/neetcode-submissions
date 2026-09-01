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
    int maxDepth(TreeNode* root) {
        if (root ==nullptr) return 0;
        int lmax=0,rmax=0;
        if(root->left)
          lmax= maxDepth(root->left);
        
        if(root->right)  rmax= maxDepth(root->right);
        return 1+max(lmax,rmax);
    }
};
