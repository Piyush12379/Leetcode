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
  
   int height(TreeNode* root){
    if(root==NULL) return 0;

     return 1+max(height(root->left),height(root->right));
   }


    bool isBalanced(TreeNode* root) {
        if(root==NULL) return true;

       bool left =isBalanced(root->left);
       bool right=isBalanced(root->right);
       bool heighti= abs(height(root->left)-height(root->right))<=1;
       if(left && right && heighti) return true;
       else return false;


    }
};