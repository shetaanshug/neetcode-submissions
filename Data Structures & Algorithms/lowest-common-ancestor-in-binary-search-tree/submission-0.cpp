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
    
    TreeNode* lca(TreeNode* root, TreeNode* p, TreeNode* q){
       if (root->val >= min(p->val, q->val) &&
    root->val <= max(p->val, q->val)) return root;
        else if(p->val>root->val) return lca(root->right,p,q);
        else return lca(root->left,p,q);
        return nullptr;
    }
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        
        return lca(root,p,q);
    }
};
