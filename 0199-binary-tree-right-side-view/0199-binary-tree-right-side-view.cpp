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
// class SolutionA {
// public:
//     vector<int> rightSideView(TreeNode* root) {
//         vector<vector<int>> temp;
//         vector<int> ans;
//         queue<TreeNode*> q;
//         if(root == NULL){
//             return ans;
//         }
//         q.push(root);
//         while(!q.empty()) {
//             int size = q.size();
//             vector<int> level;
//             for(int i = 0; i < size; i++) {
//                 TreeNode* curr = q.front();
//                 q.pop();
//                 level.push_back(curr->val);
//                 if(curr->left)
//                     q.push(curr->left);
//                 if(curr->right)
//                     q.push(curr->right);
//             }
//             temp.push_back(level);
//         }
//         for(int i = 0; i < temp.size(); i++) {
//             ans.push_back(temp[i].back());
//         }
//         return ans;
//     }
// };
class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {
      vector<int> ans;
      queue<TreeNode* >q;
      if(root==NULL)return ans;
      q.push(root);
      while(!q.empty()){
        int size=q.size();
        for(int i=0;i<size;i++){
            TreeNode* curr=q.front();
            q.pop();
            if(i==size-1){
                ans.push_back(curr->val);
            }
            if(curr->left)q.push(curr->left);
            if(curr->right)q.push(curr->right);
        }
      }
      return ans;
    }
};