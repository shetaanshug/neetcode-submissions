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
    int issame(TreeNode*p, TreeNode*q){
        if(p==nullptr&&q==nullptr) return 1;
        else if(p==nullptr||q==nullptr) return -1;
        if(p->val!=q->val) return -1;
        int left = issame(p->left,q->left);
        if(left==-1) return -1;
        int right = issame(p->right,q->right);
        if(right==-1) return -1;

        return 1;
    }
    int check(TreeNode*root, TreeNode*subRoot){
        if(root == nullptr) return -1;
        if(issame(root,subRoot)!=-1) return 1;
        int left=check(root->left,subRoot);
        if(left!=-1) return 1;
        int right=check(root->right,subRoot);
        if(right!=-1) return 1;

        return -1;



    }
public:
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        return check(root,subRoot) !=-1;
    }
};
