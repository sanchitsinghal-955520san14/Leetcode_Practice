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
    void flatten(TreeNode* root) {
        if(root==nullptr)return;
        preorder(root,ans);
        TreeNode* curr = root;
        for (int i = 1; i < ans.size(); i++) {
            curr->left = nullptr;
            TreeNode* newNode = new TreeNode(ans[i]);
            curr->right = newNode;
            curr = curr->right;
        }
        curr->left = nullptr;
        curr->right = nullptr;
        root->val = ans[0];
    }
    vector<int>ans;
    void preorder(TreeNode* root, vector<int>& ans){
        if(root==nullptr)return;
         ans.push_back(root->val);
        preorder(root->left,ans);
        preorder(root->right,ans);
    }
};