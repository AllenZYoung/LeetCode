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
  bool isSameTree(TreeNode* p, TreeNode* q) {
  	if (!p && !q) return 1; // p and q are NULL
  	return isSame(p, q);
  }
  bool isSame(TreeNode* p, TreeNode* q) {
  	if (p == NULL && q == NULL) return 1;
  	else if (p == NULL || q == NULL) return 0;
  	return (p->val == q->val) && isSame(p->left, q->left) && isSame(p->right, q->right);
  }
};
