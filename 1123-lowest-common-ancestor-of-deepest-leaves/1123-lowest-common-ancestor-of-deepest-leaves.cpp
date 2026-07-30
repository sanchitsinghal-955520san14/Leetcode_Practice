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
    TreeNode* lcaDeepestLeaves(TreeNode* root) {
        if(root==nullptr)return nullptr;
        int leftheight = height(root->left);
        int rightheight= height(root->right);
        if(leftheight==rightheight)return root;
        if(leftheight > rightheight){
            return lcaDeepestLeaves(root->left);
        }
        return lcaDeepestLeaves(root->right);
    }
    int height(TreeNode* root){
        if(!root)return 0;
        int left=height(root->left);
        int right=height(root->right);
        return 1 + max(left,right);
    }
};