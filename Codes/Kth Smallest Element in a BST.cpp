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
    int countNodes(TreeNode* root) {
      if (root == NULL) return 0;
      return 1 + countNodes(root->left) + countNodes(root->right);
    }

    int kthSmallest(TreeNode* root, int k) {
      int count = countNodes(root->left);
      if (k <= count) {
        return kthSmallest(root->left, k);
      } else if (k > count + 1) {
        return kthSmallest(root->right, k-1-count);
      }

      return root->val;
    }


};