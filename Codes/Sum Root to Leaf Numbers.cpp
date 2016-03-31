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
    int sumNumbers(TreeNode* root) {
      return SumNumberUtil(root, 0);
    }
    int SumNumberUtil(TreeNode * node, int val) {
      if (node == NULL) return 0;
      val = val * 10 + node->val;
      if (node->left == NULL && node->right == NULL) {
        return val;
      }
      return SumNumberUtil(node->left, val) + SumNumberUtil(node->right, val);
    }
};