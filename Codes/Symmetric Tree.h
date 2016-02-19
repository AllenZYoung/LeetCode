/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {//recursive solution
public:
  bool isSymmetric(TreeNode* root) {
  	if (root == NULL)
  		return 1;
  	return IsMirror(root->left, root->right);    
  }
  bool IsMirror(TreeNode *p, TreeNode *q) {
  	if (p == NULL && q == NULL) return 1;
  	else if (p == NULL || q == NULL) return 0;
  	return (p->val == q->val) && IsMirror(p->left, q->right) && IsMirror(p->right, q->left);

  }
};
