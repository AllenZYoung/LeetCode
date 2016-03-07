/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    void binaryTreeP(std::vector<string> & result, TreeNode* root, string t) {
      if (!root->left && !root->right) {
        result.push_back(t);
        return ;
      }

      if (root->left) binaryTreeP(result, root->left, t + "->" + to_string(root->left->val));
      if (root->right) binaryTreeP(result, root->right, t + "->" + to_string(root->right->val));
    }
    vector<string> binaryTreePaths(TreeNode* root) {
      std::vector<string> result;
      if (!root) return result;
      binaryTreeP(result, root, to_string(root->val));
      return result;  
    }
};