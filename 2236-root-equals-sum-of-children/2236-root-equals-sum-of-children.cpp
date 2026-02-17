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
    int sum(TreeNode* root){
        if(root==NULL) return 0;
        return root->val+sum(root->left)+sum(root->right);
    }

    bool checkTree(TreeNode* root) {
        if(root==NULL) return true;
        if(root->left==NULL && root->right==NULL) return true;
        int left=sum(root->left);
        int right=sum(root->right);
        if(left+right == root->val && checkTree(root->left) && checkTree(root->right)) return true;
        else return false;

    }
};