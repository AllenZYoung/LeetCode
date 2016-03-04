/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {// recursive solution
public:
    vector<int> preorderTraversal(TreeNode* root) {
      vector<int> v;
      preTraversal(root, v);
      return v;
    }

    void preTraversal(TreeNode * root, std::vector<int>& v) {
      if (!root) return;
      v.push_back(root->val);
      preTraversal(root->left, v);
      preTraversal(root->right, v);
    }
};