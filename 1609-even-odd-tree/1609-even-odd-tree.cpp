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
    bool isEvenOddTree(TreeNode* root) {
        vector<vector<int>> ans;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            int n=q.size();
            vector<int> level;
            for(int i=0;i<n;i++){
                TreeNode* curr=q.front();
                q.pop();
                level.push_back(curr->val);
                if(curr->left)q.push(curr->left);
                if(curr->right)q.push(curr->right);
            }
            ans.push_back(level);
        }
         int p = ans.size();
        for (int i = 0; i < p; i++) {
            if (i % 2 == 0) {
                for (int j = 0; j < ans[i].size(); j++) {
                    if (ans[i][j] % 2 == 0)
                        return false;
                    if (j > 0 && ans[i][j] <= ans[i][j - 1])
                        return false;
                }
            }
            else {
                for (int j = 0; j < ans[i].size(); j++) {
                    if (ans[i][j] % 2 != 0)
                        return false;
                    if (j > 0 && ans[i][j] >= ans[i][j - 1])
                        return false;
                }
            }
        }
        return true;
    }
};