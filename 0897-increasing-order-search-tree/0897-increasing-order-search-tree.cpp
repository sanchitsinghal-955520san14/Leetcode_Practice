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
    TreeNode* increasingBST(TreeNode* root) {
        inorder(root);
         TreeNode* newRoot = new TreeNode(ans[0]);
        TreeNode* curr = newRoot;
        for (int i = 1; i < ans.size(); i++) {
            curr->right = new TreeNode(ans[i]);
            curr = curr->right;
        }

        return newRoot;
    }
    vector<int>ans;
    void inorder(TreeNode* root){
        if(!root)return ;
        inorder(root->left);
        ans.push_back(root->val);
        inorder(root->right);
    }
};