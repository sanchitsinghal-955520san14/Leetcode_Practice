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
    TreeNode* addOneRow(TreeNode* root, int val, int depth) {
        if (depth == 1) {
            TreeNode* newRoot = new TreeNode(val);
            newRoot->left = root;
            return newRoot;
        }
        queue<TreeNode*> q;
        q.push(root);
        int level = 1;
        while (!q.empty()) {
            int size = q.size();
            if (level == depth - 1) {
                for (int i = 0; i < size; i++) {
                    TreeNode* curr = q.front();
                    q.pop();
                    TreeNode* left = new TreeNode(val);
                    TreeNode* right = new TreeNode(val);
                    left->left = curr->left;
                    right->right = curr->right;
                    curr->left = left;
                    curr->right = right;
                }
                break;
            }
            for (int i = 0; i < size; i++) {
                TreeNode* curr = q.front();
                q.pop();
                if (curr->left)
                    q.push(curr->left);
                if (curr->right)
                    q.push(curr->right);
            }
            level++;
        }
        return root;
    }
};