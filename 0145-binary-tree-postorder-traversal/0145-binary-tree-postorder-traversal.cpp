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
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int>v;
        if(root==NULL) return v;
        vector<int>left=postorderTraversal(root->left);
        v.insert(v.end(),left.begin(),left.end());
        vector<int>right=postorderTraversal(root->right);
        v.insert(v.end(),right.begin(),right.end());

        v.push_back(root->val);

    return v;
    }
};